// Maximum Consecutive Ones
#include<iostream>
#include<vector>
using namespace std;

int print(vector<int>&nums){
  int n=nums.size();
  int maxcount=0;
  int count=0;

  for(int i=0;i<n;i++){
    if(nums[i]==1){
      count++;
    }
    else{
      maxcount=max(count,maxcount);
      count=0;
    }
  }
  maxcount = max(count, maxcount);
  return maxcount;
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

cout<<"The count is "<<value<<endl;

}


