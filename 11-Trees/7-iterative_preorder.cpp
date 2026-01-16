#include<iostream>
#include<stack>
#include<vector>
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
vector<int> preorder(TreeNode*root){
  vector<int> ans;
  if(root==NULL)
  {
    return ans;
  }
  stack<TreeNode*>st;
  st.push(root);
  while(!st.empty()){
   TreeNode*node=st.top();
   st.pop();
   ans.push_back(node->data);
   if(node->right!=NULL){
    st.push(node->right);
   }
   if(node->left!=NULL){
    st.push(node->left);
   }
 
  }
return ans;
}
int main(){
   TreeNode*root=new TreeNode(1);
   root->left=new TreeNode(2);
   root->right=new TreeNode(7);
   root->left->left=new TreeNode(3);
   root->left->right=new TreeNode(4);
   root->left->right->left= new TreeNode(5);
      root->left->right->right=new TreeNode(6);

      vector<int> result=preorder(root);
      for(int i=0;i<result.size();i++){
        cout<< result[i]<<" ";
      }
}
