#include<iostream>
#include<vector>
using namespace std;

int print(vector<int> &arr,int low,int high,int target){

if(low>high){
  return -1;
}
int mid=(low+high)/2;

if(arr[mid]==target){
  return mid;
}
else if(target>arr[mid]){
  return print(arr,mid+1,high,target);
}
else{
  return print(arr,low,mid-1,target);
}

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
cout<<endl;
int index=print(arr,0,n-1,target);

  
    if (index != -1){
        cout << "Element found at index " << index << endl;
}
    else{
        cout << "Element not found!" << endl;
        }

return 0;
  }
 