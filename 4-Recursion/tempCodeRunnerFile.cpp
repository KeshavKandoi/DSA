#include<iostream>
using namespace std;

void print(int i,int sum){
  if(i<1){
     cout<< (sum) ;
    return ;
   
  }
  
  print(i-1,sum+i);
}

int main(){
  int n;
  cout<< " Enter the N " ;
  cin>>n;
  print(n,0);


}