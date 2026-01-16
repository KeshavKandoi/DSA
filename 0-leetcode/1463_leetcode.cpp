#include<iostream>
#include<vector>
using namespace std;

int print(vector<int>&nums,int k){
  int lsum=0;
  int rsum=0;
  int maxsum=0;


  for(int i=0;i<k;i++){
    lsum=lsum+nums[i];
    maxsum=lsum;
  }
  int rightIndex=nums.size()-1;
  for(int i=k-1;i>=0;i--){
    lsum=lsum-nums[i];
    rsum=rsum+nums[rightIndex];
    rightIndex=rightIndex-1;

    maxsum=max(maxsum,lsum+rsum);
  }
return maxsum;
}

int main(){
  int n;
  cout<< " Enter the size "<<endl;
  cin>>n;

  vector<int>nums(n);
  cout<< " enter the array "<<endl;
  for(int i=0;i<n;i++){
    cin>>nums[i];
  }
  cout<< " \nThe array is \n"<<endl;
  for(int i=0;i<n;i++){
    cout<< nums[i] <<" " ;
     }
     cout<<endl;
     cout<< print(nums,4);
}