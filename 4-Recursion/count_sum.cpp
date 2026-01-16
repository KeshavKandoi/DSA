#include<iostream>
using namespace std;


int print(int index ,int arr[],int s,int sum,int n){
  if (index==n){
    if(s==sum){
    return 1;
    }
   else return 0;
  }

  s+=arr[index];
 int l= print(index+1,arr,s,sum,n);
   
  s-=arr[index];

 int r= print(index+1,arr,s,sum,n);
  
  
return l+r;
}

int main(){
  int n=3;
  int sum=2;
  int arr[]={1,2,1};
  cout<<print(0,arr,0,sum,n);

return 0;
}