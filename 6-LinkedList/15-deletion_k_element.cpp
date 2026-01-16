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
  if(arr.empty()) 
  return nullptr;
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
Node*deletionhead(Node*head){
if(head==nullptr || head->next==nullptr){
  return nullptr;
}
Node*previous=head;
head=head->next;
previous->next=nullptr;
head->back=nullptr;
return head;
}

Node*removeElement(Node*head,int k){
int cnt=0;
Node*temp=head;
while(cnt!=k){
cnt++;
if(cnt==k){
  break;
}
temp=temp->next;
}
if(temp==nullptr){
return nullptr;
}
else if(temp->back==nullptr){
  return deletionhead(head);
}
else if(temp->next==nullptr){
  return deletionTail(head);
}
Node*prev=temp->back;
Node*front=temp->next;

prev->next=front;
front->back=prev;

temp->back=nullptr;
temp->next=nullptr;
delete temp;
return head;
}





int main(){
  vector<int> arr={2,1,4,3,2,4,42,4,2};
  Node* head= ConvertArrtoLL(arr);

head=removeElement(head,8);
  
  transverse(head);
}