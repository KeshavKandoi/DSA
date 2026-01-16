#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int d) {
        data = d;
        left = right = NULL;
    }
};


Node* buildTree() {
    int data;
    cout << "Enter data (-1 for no node): ";
    cin >> data;

    if (data == -1) 
        return NULL;

    Node* root = new Node(data);

    cout << "Enter left child of " << data << endl;
    root->left=buildTree();

    cout << "Enter right child of " << data << endl;
     root->right=buildTree();

    return root;
}



int main() {
   Node*root=NULL;
   root=buildTree();

    return 0;
}