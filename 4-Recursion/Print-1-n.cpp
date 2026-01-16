#include<iostream>
using namespace std;

int i=0;
void print(int i,int n){
  if(i>n)
    return ;
   
 cout<< i << endl; 
 i++;
 print(i,n);
}
int main(){
  int n;
  cout<< " enter the value of N "  ;
  cin>>n;
print(1,n) ;
  return 0;
}