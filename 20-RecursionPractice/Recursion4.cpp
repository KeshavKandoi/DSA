// 509. Fibonacci Number

#include<iostream>
using namespace std;

    int fib(int n) {
        int sum=0;

     
        if(n==0){
            return 0;
        }

        if(n==1){
            return 1;
        }

        return fib(n-1)+fib(n-2);
   
    }

int main(){
  int n;
  cout<<"Enter the value of n"<<endl;
  cin>>n;

  int  value=fib(n);

 cout<<"The value is "<<value<<endl;
}