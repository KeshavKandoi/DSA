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
Node*insertionBeforeHead(Node*head,int val){
Node* New=new Node(val,head,nullptr);
head->back=New;
return New;
}
Node*insertionBeforeTail(Node*head,int val){

  if(head->next==nullptr){
    return insertionBeforeHead(head,val);
  }
  Node*temp=head;
  while(temp->next!=nullptr){
    temp=temp->next;
  }
  Node*previous=temp->back;
  Node*New=new Node(val,temp,previous);
  previous->next=New;
  temp->back=New;
  return head;
}
Node*insertionK(Node*head,int val,int k){
  Node*temp=head;
  if(k==1){
    return insertionBeforeHead(head,val);
  }
  int cnt=0;
  while(temp!=nullptr){
    cnt++;
    if(cnt==k) break;
    temp=temp->next;
  }
  Node*prev=temp->back;
  Node*New=new Node(val,temp,prev);
  prev->next=New;
  temp->back=New;
  return head;
}



int main(){
  vector<int> arr={12,3,4,5};
  Node* head= ConvertArrtoLL(arr);

head=insertionK(head,666,4);
  
  transverse(head);
  return 0;
}