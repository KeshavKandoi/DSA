#include<iostream>
using namespace std;

struct Node{
  public:
  int data;
  Node* next;

  public:
  Node(int data1,Node*next1){
    data=data1;
    next=next1;
  }
};
Node* convertArrToLL(vector<int>&arr){
  Node* head=new Node(arr[0],nullptr);
  Node* mover=head;
  for(int i=1;i<arr.size();i++){
    Node*temp=new Node(arr[i],nullptr);
    mover->next=temp;
    mover=temp;

  }
  return head;
  
}
  
}