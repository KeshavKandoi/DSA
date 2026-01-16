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
vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

  vector<vector<int>> ans;
  if(root==NULL){
    return ans;
  }
  queue<TreeNode*>q;
  q.push(root);
  bool LeftToRight =true;
  while(!q.empty()){
    int size=q.size();
    vector<int>level;

    for(int i=0;i<size;i++){
     TreeNode*node=q.front();
     q.pop();
     level.push_back(node->data);
       if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            if(LeftToRight==false){
              reverse(level.begin(),level.end());
            }
            LeftToRight=!LeftToRight;
            ans.push_back(level);
    }
  return ans;
      }

int main(){
TreeNode*root=new TreeNode(1);
  root->left=new TreeNode(2);
  root->right=new TreeNode(3);
  root->right->left=new TreeNode(4);
  root->right->right=new TreeNode(6);
  root->right->left->left=new TreeNode(5);

 
    vector<vector<int>> result = zigzagLevelOrder(root);

    for(int i = 0; i < result.size(); i++){
        for(int j = 0; j < result[i].size(); j++){
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

}