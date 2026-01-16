#include<iostream>
#include<vector>
using namespace std;

int print(vector<int> &arr,int n,int target){
int low=0;
int high=n-1;


while(low<=high){
   int mid=(low+high)/2;

  if(arr[mid]== target ){
    return mid;
  }

else if(target>arr[mid]){
  low=mid+1;
}
else{
  high=mid-1;
}

  }
  return -1;

}



int main(){
  int n;
  cout<<" enter the numbers " ;
  cin>> n;
  
  vector<int> arr(n);

cout << "Enter " << n << " sorted numbers: ";


  for(auto &it:arr){
    cin>>it;
  }
  int target;
    cout << "Enter the number to search: ";
    cin >> target;

cout<<" The array is "<<endl;
for(auto it:arr){
    cout<<it<< " " ;
}
int index=print(arr,n,target);

  
    if (index != -1){
        cout << "Element found at index " << index << endl;
}
    else{
        cout << "Element not found!" << endl;
        }

return 0;
  }
  




