#include<iostream>
#include<vector>
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
vector<int> postorder(TreeNode*root){
  vector<int> ans;
  if(root==NULL){
    return ans;
  }
  stack<TreeNode*>st1,st2;
  st1.push(root);
  while(!st1.empty()){
    root=st1.top();
    st1.pop();
    st2.push(root);
    if(root->left!=NULL){
     st1.push(root->left);
    }
    if(root->right!=NULL){
       st1.push(root->right);
    }
  }
  while(!st2.empty()){
    ans.push_back(st2.top()->data);
    st2.pop();
  }
 return ans;
}
int main(){
   TreeNode*root=new TreeNode(1);
   root->left=new TreeNode(2);
   root->right=new TreeNode(3);
   root->left->left=new TreeNode(4);
   root->left->right=new TreeNode(5);
   root->left->right->left= new TreeNode(6);
      root->left->right->right=new TreeNode(7);

      vector<int> result=postorder(root);
      for(int i=0;i<result.size();i++){
        cout<< result[i]<<" ";
      }
}
