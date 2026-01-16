#include<iostream>
using namespace std;

int start=-1;
int rear=-1;
int currSize=0;
int q[10];

void push(int x){ 
if(currSize==10){
  cout<<"overflow";
  return ;
}
if(currSize==0){
  start=0;
  rear=0;
  q[rear]=x;
}
else{
  rear=rear+1;
  q[rear]=x;

}
  currSize=currSize+1;
  
}

void pop(){
  if(currSize==0){
    cout<<"underflow";
    return;
  }

  start=start+1;
  currSize--;

  if(currSize==0){
    start=-1;
    rear=-1;
  }
}

int Top(){
  if(currSize==0){
    cout<<" Not possible ";
    return -1;
  }
  return q[start];
}

int size(){
  
  return currSize;
}

int main(){
  int n;
  int element;
  cout<< " Enter the no of elements ";
  cin>>n;

  if (n > 10) {
        cout << "Stack can hold only 10 elements!" << endl;
        return 0;
    }

  cout<<" Enter the elements";

  for(int i=0;i<n;i++){
    cin>>element;
    push(element);
  }

 cout << "queue elements : ";
    for (int i =start; i<=rear; i++) {
        cout << q[i] << " ";
    }
    cout << endl; 

cout << "Top element is: " << Top() << endl;
    cout << "Stack size is: " << size() << endl;

    pop();
    cout << "queue elements : ";
    for (int i =start ;i<=rear; i++) {
        cout << q[i] << " ";
}
}
