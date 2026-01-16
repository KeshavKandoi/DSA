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
Node*deletionTail(Node*head){
Node*temp=head;
  if(head==nullptr||head->next==nullptr){
   return nullptr;
  }
    while(temp->next->next!=nullptr){
   temp= temp->next;
    }
    delete(temp->next);
    temp->next=nullptr;
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

int main(){
  vector<int> arr={100000,2,4,6};
 Node* head=Conversion(arr);
  cout<<head->data;
  cout<<endl;
head=deletionTail(head);
cout << "After Deletion: ";
  transverse(head);
 
};
