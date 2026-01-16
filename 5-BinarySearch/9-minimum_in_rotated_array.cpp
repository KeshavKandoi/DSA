#include<iostream>
#include<vector>
using namespace std;

int print(vector<int>&arr,int n){
  int low=0;
  int high=n-1;
  int ans=INT_MAX;
  while(low<=high){
    int mid=(low+high)/2;
    if(arr[low]<=arr[high]){
      ans=min(ans,arr[low]);
      break;
    }

    if(arr[low]<=arr[mid]){
      ans=min(ans,arr[low]);
      low=mid+1;
    }
    else{
      ans=min(ans,arr[mid]);
      high=mid-1;
    }
  }
return ans;
}
int main(){
  int n;
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

cout<< " the minimum is "<< print(arr,n);
}