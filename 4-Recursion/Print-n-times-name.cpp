#include<iostream>
using namespace std;


void print(int i,int n){
  if(i>n)
    return ;
  
 cout<< "K.KANDOI" << endl; 
 i++;
 print(i,n);
}
int main(){
  int n;
  cout<< "enter the value of N" ;
  cin>>n;
print(1,n) ;
  return 0;
}