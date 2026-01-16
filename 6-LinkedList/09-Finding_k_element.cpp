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
Node*deletion(Node*head,int k){
if(head==nullptr)
return nullptr;
if(k==1){
Node*temp=head;
head=head->next;
free(temp);
return head;
}
int cnt=0;
Node*temp=head;
Node*previous=NULL;
while(temp!=nullptr){
cnt++;
if(cnt==k){
  previous->next=previous->next->next;
  free(temp);
  break;
}
previous=temp;
temp=temp->next;
}
return head;
}

int main(){
  vector<int> arr={100000,2,4,6};
 Node* head=Conversion(arr);
  cout<<head->data;
  cout<<endl;
head=deletion(head,1);
cout << "After Deletion: ";
  transverse(head);
 
};
