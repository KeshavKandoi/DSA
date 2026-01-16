#include<iostream>
using namespace std;

class Node{
  public:
  int data ;
  Node*left;
  Node*right;

Node(int d){
 this ->data=d;
 this->left=NULL;
 this->right=NULL;
}
};
int main(){
  Node*root=new Node(1);
  root->left=new Node(2);
  root->right= new Node(3);
  root->left->right=new Node(4);

  cout << "Root Node: " << root->data << endl;
    cout << "Left Child: " << root->left->data << endl;
    cout << "Right Child: " << root->right->data << endl;
    cout << "Left->Right Child: " << root->left->right->data << endl;

    return 0;
  }