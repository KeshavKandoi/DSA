#include<iostream>
#include<queue>
using namespace std;

class TreeNode{
  public:
  int data;
  TreeNode*left;
  TreeNode*right;
  
  TreeNode(int d){
    this->data=d;
    this->left=NULL;
    this->right=NULL;
  }
};

bool isComplete(TreeNode*root){
  if(root==NULL){
    return true;

  }
  queue<TreeNode*> pq;
  pq.push(root);
  bool Nullfound=false;

  while(!pq.empty()){
    TreeNode*temp=pq.front();
    pq.pop();

    if(temp==NULL){
      Nullfound= true;
    }
    else{
      if(Nullfound==true)
      return false;
      pq.push(temp->left);
      pq.push(temp->right);
    }
  }
  return true;
}
bool isHeapProperty(TreeNode*root){
  if(root==NULL){
    return true;
    
      }

      if(root->left ==NULL&&root->right==NULL){
        return true;
      }
      if(root->right==NULL){
        return (root->data>=root->left->data )&& isHeapProperty(root->left);

      }
     bool leftOk = root->data >= root->left->data;
    bool rightOk = root->data >= root->right->data;

    return leftOk&&rightOk && isHeapProperty(root->left) && isHeapProperty(root->right);
}

bool IsHeap(TreeNode*root){
      return isComplete(root) && isHeapProperty(root);
}

int main() {
    TreeNode* root = new TreeNode(50);
    root->left = new TreeNode(30);
    root->right = new TreeNode(40);
    root->left->left = new TreeNode(10);
    root->left->right = new TreeNode(5);

    if(IsHeap(root))
        cout << "The Binary Tree is a Heap\n";
    else
        cout << "The Binary Tree is NOT a Heap\n";

    return 0;
}