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
vector<int> inorder(TreeNode*root){
vector<int> ans;
stack<TreeNode*>st;
TreeNode*node=root;
while(true){
  if(node!=NULL){
    st.push(node);
    node=node->left;
  }
  else{
    if(st.empty())
      break;
      node=st.top();
      st.pop();
      ans.push_back(node->data);
      node=node->right;
  }
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

      vector<int> result=inorder(root);
      for(int i=0;i<result.size();i++){
        cout<< result[i]<<" ";
      }
}
