#include<iostream>
using namespace std;

struct Node{
  public:
  int data;
  Node* next;

  public:
  Node(int data1,Node* next1){
 data=data1;
 next= next1;
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
void print(Node* head){
  while(head!=NULL){
    cout<< head->data << " ";
    head=head->next;
  }
  cout<< endl;
}
Node* removeHead(Node* head){
  if(head==NULL)
    return head;
  Node* temp=head;
  head=head->next;
  delete temp;
  return head;
}
int main(){
  vector<int> arr={12,3,4,5};
  Node* head= ConvertArrtoLL(arr);
  head=removeHead(head);
  print(head);
}

