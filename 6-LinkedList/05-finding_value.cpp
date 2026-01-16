#include<iostream>
using namespace std;

struct Node{
  public:
  int data;
  Node* next;

public:
Node(int data1,Node* next1){
  data=data1;
  next=next1;
}
};
Node *ConvertArrtoLL(vector<int> &arr){
  Node* head=new Node(arr[0],nullptr);
  Node* mover=head;
  for(int i=1;i<arr.size();i++){
    Node* temp=new Node(arr[i],nullptr);
    mover->next =temp;
    mover=temp;
  }
return head;
}
int checkIfPresent(Node* head,int value){
   Node* temp=head;
  while(temp!=nullptr){
    if(temp->data==value){
      return 1;
    }
      temp=temp->next;
  }
    
      return 0;
  
  }


int main(){
  vector<int> arr={12,3,4,5,7};
  Node* head= ConvertArrtoLL(arr);
  cout<< checkIfPresent(head,5);
  };
