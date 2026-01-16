#include<iostream>
using namespace std;

int print(vector<int> &arr,int target,int n){
  int low=0;
  int high=n-1;
  int ans=n;

  while(low<=high){
    int mid=(low+high)/2;
    if(arr[mid]>target){
      ans=mid;
      high=mid-1;
    }
    else{
      low=mid+1;
    }
  }
  return ans;
}




int main(){
  int n;
  int target;
  cout<< " Enter the numbers: ";
  cin>>n;



  vector<int> arr(n);
  cout<< " Enter the arrays "<<endl;
  for(auto &it:arr){
    cin>>it;
  }
  cout<< " The arrays are ";
  for(auto it:arr){
    cout<< it << " ";
  }
  cout<<endl;
  cout<< " Enter the target: ";
  cin>>target;

 cout<< " The upper bound is " << print(arr,target,n);




}