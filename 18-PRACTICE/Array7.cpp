#include<iostream>
#include<vector>
using namespace std;

int print(vector<int>&arr,int nums){

  int n=arr.size();
  for(int i=0;i<n;i++){
    if(arr[i]==nums){
      return i;
    }

  }
  return -1;
}

int main(){
int n;
int nums;
cout<<"Enter the value of nums"<<endl;
cin>>nums;
cout<<"Enter the size of array"<<endl;
cin>>n;




vector<int>arr(n);

cout<<"Enter the array"<<endl;
for(int i=0;i<n;i++){
  cin>>arr[i];
}
cout<<"The array is "<<endl;
for(int i=0;i<n;i++){
  cout<<arr[i];
  cout<<" ";
}
cout<<endl;
int value=print(arr,nums);

cout<<"The index is "<<value<<endl;

}
