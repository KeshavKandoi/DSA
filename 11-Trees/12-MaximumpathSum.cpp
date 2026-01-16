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


int MaxPath(TreeNode*root,int&maxi){
if(root==NULL){
  return 0;
}
int LeftSum=MaxPath(root->left,maxi);
int RightSum=MaxPath(root->right,maxi);

maxi=max(maxi,LeftSum+RightSum+root->data);

return root->data+max(LeftSum,RightSum);
}


int MaxPathSum(TreeNode*root){
int maxi = INT_MIN;   //0 nhi legye kyuki value negative bhi ho skta hai 
MaxPath(root,maxi);
return maxi;
}


int main(){
  TreeNode*root=new TreeNode(1);
  root->left=new TreeNode(2);
  root->right=new TreeNode(3);
  root->right->left=new TreeNode(4);
  root->right->right=new TreeNode(6);
  root->right->left->left=new TreeNode(5);

cout<< MaxPathSum(root)<<endl;
}