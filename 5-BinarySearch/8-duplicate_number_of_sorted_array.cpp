#include<iostream>
#include<vector>
using namespace std;

int print(vector<int>&arr,int target,int n){
  int low=0;
  int high=n-1;

  while(low<=high){
    int mid= (low +high)/2;
    if(arr[mid]==target){
      return mid;
    }
      if(arr[low]==arr[mid] &&  arr[mid]==arr[high]){
        low++;
        high--;
        continue;

    }

    if(arr[low]<=arr[mid]){//left sorted

    if(target<arr[mid]&&target>=arr[low]){
      high=mid-1;
    }
      else{
low=mid+1;
      }
    }
      else{
        if(target>arr[mid]&&target<=arr[high]){//right sort
low=mid+1;
        }
      
else{
  high=mid-1;
}
      }

    }
return -1;
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

int ans=print(arr,target,n);

    if (ans == -1) {
        cout << "Target not found in array.\n";
    } else {
        cout << " Target Found at index " << ans<<endl;
    }

    return 0;
}



  