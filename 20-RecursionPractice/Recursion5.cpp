// 70. Climbing Stairs

#include<iostream>

using namespace std;

int climbStairs(int n) {
    if(n==1){
        return 1;
    }
    if(n==2){
        return 2;
    }

    int a=1;
    int b=2;

for(int i=3;i<=n;i++){
   int sum=a+b;
     a=b;
     b=sum;

}
return b;


        
    }

int main(){
  int n;
  cout<<"Enter the value of n"<<endl;
  cin>>n;

  int  value=climbStairs(n);

 cout<<"The value is "<<value<<endl;
}