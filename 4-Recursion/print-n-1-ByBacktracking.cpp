#include<iostream>
using namespace std;

void print(int i,int n){
  if(n<i)
    return ;

 print(i+1,n);
 cout<< i << endl; 
 }
int main(){
  int n;
  cout<< " enter the value of N " ;
  cin>>n;
print(1,n) ;
  return 0;
}