// Factorial
#include<iostream>
#include<vector>

using namespace std;

int factorial(int value){

  if(value==0){
    return 1;
  }

  int res=value;

  for(int i=1;i<value;i++){


    res*=(value-i);


  }
  return res;


}

int main(){
  int n;

  cout<<"Enter the value of n"<<endl;
  cin>>n;

cout<<"The factorial is"<<factorial(n)<<endl;

}
