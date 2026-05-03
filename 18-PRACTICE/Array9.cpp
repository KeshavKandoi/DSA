// MISSING NUMBER
#include<iostream>
#include<vector>
using namespace std;

int print(vector<int>&nums){
  int n=nums.size();

  int expected_sum = n*(n+1)/2;
  int sum=0;

  for(int i=0;i<n;i++){
    sum +=nums[i];

  }
  sum=expected_sum-sum;

  return sum;

}



int main(){
int n;
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
int value=print(arr);

cout<<"The Missing number is "<<value<<endl;

}


