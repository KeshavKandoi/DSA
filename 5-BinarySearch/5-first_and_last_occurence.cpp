#include<iostream>
using namespace std;
#include<vector>


int lowerbound(vector<int> &arr,int target,int n){
  int low=0;
  int high=n-1;
  int ans=n;

  while(low<=high){
    int mid=(low+high)/2;
    if(arr[mid]>=target){
      ans=mid;
      high=mid-1;
    }
    else{
      low=mid+1;
    }
  }
  return ans;
}

int upperbound(vector<int> &arr,int target,int n){
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

pair<int,int> firstAndLastPosition(vector<int> &arr,int target,int n){

  int lb=lowerbound(arr,target,n);
  
  if( lb==n || arr[lb]!=target){
    return {-1,-1};
  }
  return {lb,upperbound(arr,target,n)-1};
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

pair<int, int> ans = firstAndLastPosition(arr, target, n);

    if (ans.first == -1) {
        cout << "Target not found in array.\n";
    } else {
        cout << "The first occurrence is at index " << ans.first
             << " and the last occurrence is at index " << ans.second << endl;
    }

    return 0;
}


