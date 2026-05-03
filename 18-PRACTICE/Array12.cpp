// Longest subarray with given sum K(positives)
#include<iostream>
#include<vector>

using namespace std;

int print(vector<int>&nums,int k){
  

  int n=nums.size();
 
 
  int maxcount=0;

  for(int i=0;i<n;i++){
     int sum=0;
      int count=0;
    for(int j=i;j<n;j++){
        sum+=nums[j];
        count++;
      
      if(sum == k) {
      maxcount = max(maxcount, count);

      }
   
    }
      

  }
  return maxcount;
}


int main(){
int n;
cout<<"Enter the size of array"<<endl;
cin>>n;
int k;
cout<<"enter the value of k" <<endl;
cin>>k;




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
int value=print(arr,k);

cout<<"The Longest Subarray  is "<<value<<endl;

}


