#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node*left;
  Node*right;

Node(int d){
 this->data=d;
 this->left=NULL;
 this->right=NULL;
}
};

void inorder(Node*root){

  if(root==NULL){
    return ;
  }
  
  inorder(root->left);
  cout<< (root->data)<<" ";
  inorder(root->right);
}
int main(){
  Node*root=new Node(1);
  root->left=new Node(2);
  root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left= new Node(7);
     root->right->right= new Node(8);
     root->left->right->left=new Node(6);
     root->right->right->left=new Node(9);
          root->right->right->right=new Node(10);


    cout << "inorder traversal: ";
    inorder(root);

    return 0;
}
