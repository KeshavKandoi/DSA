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

  void preorder(Node*root){
    if(root==NULL){
      return;
    }
   cout<< root->data<<" ";
   preorder(root->left);
   preorder(root->right);
  }
  int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Preorder traversal: ";
    preorder(root);

    return 0;
}