#include<iostream>
using namespace std;
 

int Top=-1;
int st[10];

void push(int x){
if(Top==9){
  cout<<"Not possible";
  return ;

}
Top=Top+1;
st[Top]=x;
}
void pop(){
  if(Top==-1){
    cout<<"not possible";
    return ;
  }
  Top=Top-1;
}
int top(){
  if(Top==-1){
    cout<<"No element";
    return -1;
  }
  return st[Top];
}
int size(){
if(Top==-1){
    cout<<"No element";
  }
  return Top+1;
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

 cout << "Stack elements (top to bottom): ";
    for (int i =Top; i>=0; i--) {
        cout << st[i] << " ";
    }
    cout << endl; 

cout << "Top element is: " << top() << endl;
    cout << "Stack size is: " << size() << endl;

    pop();
    cout << "Stack elements (top to bottom): ";
    for (int i =Top; i>=0; i--) {
        cout << st[i] << " ";
}
}
