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
Node*insertion(Node*head,int k){
 Node*temp=head;
 if(head==nullptr){
 return new Node(k,nullptr);
 }
 while(temp->next!=nullptr){
  temp=temp->next;
 }
  Node*add=new Node(k,nullptr);
  temp->next=add;
  return head;
 
}

int main(){
  vector<int> arr={100000,2,4,6};
 Node* head=Conversion(arr);
  cout<<head->data;
  cout<<endl;
head=insertion(head,200000);
cout << "After insertion: ";
  transverse(head);
 
};
