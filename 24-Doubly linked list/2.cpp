// Deletion the head of Doubly LL

#include<iostream>
#include<vector>

using namespace std;

class Node{
  public:
  int data;
  Node*prev;
  Node*next;

  public:
  Node(int data1,Node*prev1,Node*next1){
  data=data1;
  prev=prev1;
  next=next1;

  }
  public:
  Node(int data1){
    data=data1;
    prev=nullptr;
    next=nullptr;
  }
};
Node *arrayToDoublyLinkedList(vector<int> &arr) {
   if(arr.size()==0){
            return nullptr;
        }
        Node*head=new Node(arr[0]);
        Node*prev=head;

        for(int i=1;i<arr.size();i++){
            Node*temp=new Node(arr[i],prev,nullptr);
            prev->next=temp;
            prev=temp;
        }
        return head;

}

void print(Node*head){
  Node*temp=head;

  while(temp!=nullptr){
    cout<<temp->data<<' ';

    temp=temp->next;

  }
  cout<<endl;

}

Node*DeleteHead(Node*head){
  if(head==nullptr){
    return nullptr;
  }
   if(head->next == nullptr) {
        delete head;
        return nullptr;
    }

  Node*temp=head;

  head=head->next;
  head->prev=nullptr;
  
  temp->next=nullptr;

  delete temp;

  return head;


}
int main(){
  vector<int>arr={12,5,4,3};
  Node*New=arrayToDoublyLinkedList(arr);
  Node*value=DeleteHead(New);
  print(value);

}