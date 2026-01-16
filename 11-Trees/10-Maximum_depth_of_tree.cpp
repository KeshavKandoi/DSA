#include<iostream>
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
int MaxDepth(TreeNode*root){
  if(root==NULL){
    return 0;

  }
  int lh=MaxDepth(root->left);
  int rh=MaxDepth(root->right);

  return 1+max(lh,rh);

}
int main(){
  TreeNode*root=new TreeNode(1);
  root->left=new TreeNode(2);
  root->right=new TreeNode(3);
  root->right->left=new TreeNode(4);
  root->right->right=new TreeNode(6);
  root->right->left->left=new TreeNode(5);

 cout<< MaxDepth(root)<<endl;
}