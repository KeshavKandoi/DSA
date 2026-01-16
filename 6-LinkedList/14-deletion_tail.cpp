#include<iostream>
using namespace std;

struct Node{
  public:
  int data;
  Node* next;
  Node*back;

public:
Node(int data1,Node* next1,Node*back1){
  data=data1;
  next=next1;
  back=back1;
}
};
Node *ConvertArrtoLL(vector<int> &arr){
  Node* head=new Node(arr[0],nullptr,nullptr);
 Node*prev=head;
  for(int i=1;i<arr.size();i++){
    Node* temp=new Node(arr[i],nullptr,prev);
prev->next=temp;
prev=temp;
  
  }
return head;
}
void transverse(Node* head){
  Node* temp=head;
  while(temp!=nullptr){
    cout<< temp->data<< " ";
 temp= temp->next;
  }
cout<<endl;
}
Node*deletionTail(Node*head){
if(head==nullptr  ){
  return nullptr;
}
if(head->next==nullptr){
  delete head;
  return nullptr;
}
Node*temp=head;
while(temp->next!=nullptr){
temp=temp->next;
}
Node*previous=temp->back;
previous->next=nullptr;
delete temp;
return head;
}

int main(){
  vector<int> arr={12,3,4,5};
  Node* head= ConvertArrtoLL(arr);

head=deletionTail(head);
  
  transverse(head);
}