#include<iostream>
using namespace std;

int print(int n){
  if(n==0){
    return 0;
  }
  
  return n + print(n-1);

}


int main(){
  int n;
  cout<< " enter the n ";
  cin>>n;
  cout<< print(n)<<endl;

}
