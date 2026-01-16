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
Node* Conversion(vector<int>&arr){
Node* head=new Node(arr[0],nullptr);
Node* mover=head;
for(int i=1;i<arr.size();i++){
Node* temp= new Node(arr[i],nullptr);
mover->next=temp;
mover=temp;
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
Node*insertion(Node*head,int k,int element){
 if(head==nullptr){
  if(k==1){
 return new Node(element,nullptr);
 }
 else{
  return head;
 }
 }
 if(k==1){
  Node*New=new Node(element,head);
  return New;
 }

 Node*temp=head;
 int cnt=0;


while(temp!=nullptr){

cnt++;

if(cnt==k-1){
Node*New=new Node(element,temp->next);
temp->next=New;
break;
}
else{ 
temp=temp->next;
}
 }
 return head;
}
int main(){
  vector<int> arr={100000,2,4,6};
 Node* head=Conversion(arr);
  cout<<head->data;
  cout<<endl;
head=insertion(head,1,200000);
cout << "After insertion: ";
  transverse(head);
 
};
