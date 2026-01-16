#include<iostream>
#include<vector>
using namespace std;

int firstoccurence(vector<int>&arr,int target,int n){
  int low=0;
  int high=n-1;
  int first=-1;
  while(low<=high){
   int  mid=(low+high)/2;

if(arr[mid]==target){
  first=mid;
  high=mid-1;
}
else if(arr[mid]>target){
  high=mid-1;
}
else{
  low=mid+1;
}
  }
  return first;
}

int lastoccurence(vector<int>&arr,int target,int n){
  int low=0;
  int high=n-1;
  int last=-1;
  while(low<=high){
   int  mid=(low+high)/2;

if(arr[mid]==target){
  last=mid;
  low=mid+1;
}
else if(arr[mid]>target){
  high=mid-1;
}
else{
  low=mid+1;
}
  }
  return last;
}
pair<int,int> firstandlastposition(vector<int>&arr,int target,int n){
int first=firstoccurence(arr,target,n);
if(first==-1){
  return {-1,-1};
}
int last=lastoccurence(arr,target,n);
  return {first,last};

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

pair<int, int> ans = firstandlastposition(arr, target, n);

    if (ans.first == -1) {
        cout << "Target not found in array.\n";
    } else {
        cout << "The first occurrence is at index " << ans.first
             << " and the last occurrence is at index " << ans.second << endl;
    }

    return 0;
}



