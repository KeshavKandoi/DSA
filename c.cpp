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
int length(Node* head){
  int cnt=0;
  Node* temp=head;
  while(temp!=nullptr){
    cnt++;

 temp= temp->next;
  }

return cnt;
}
bool checkIfTrue(Node*head,int value){
  Node* temp=head;
  while(temp!=nullptr){
    if(temp->data==value){
      return 1;
    }
    temp=temp->next;
  }
  return 0;
  
}
Node*deletion(Node*head){
if(head==nullptr){
    return nullptr;
  }
  Node*temp=head;
   head=head->next;
  delete temp;
  return head;
 
}


int main(){
  vector<int> arr={100000,2,4,6};
 Node* head=Conversion(arr);
  cout<<head->data;
  cout<<endl;
  transverse(head);
  cout<< " The Length is "<< length(head);
  cout<<endl;
  cout<< checkIfTrue(head,4);
  head=deletion(head);
  cout << "After Deletion: ";
  transverse(head);
};
