// single number
#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;

int print(vector<int>&nums){
  
  unordered_map<int, int> hash;
  int n=nums.size();

  for(int i=0;i<n;i++){
   

    hash[nums[i]]+=1;
  }

  for(int i=0;i<n;i++){
    if(hash[nums[i]]<=1){
      return nums[i];

    }

  }
  return -1;


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

cout<<"The single number is "<<value<<endl;

}


