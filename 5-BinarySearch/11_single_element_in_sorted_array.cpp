//single element in a sorted array;

#include<iostream>
#include<vector>
using namespace std;


int  print(vector<int>&arr,int n){
  if(n==1){
    return arr[0];
  }
  if(arr[0]!=arr[1]){
    return  arr[0];
  }
  if(arr[n-1]!=arr[n-2]){
   return  arr[n-1];
  }

  int low=1;
  int high=n-2;
  while(low<=high){
    int mid=(low+high)/2;
    if(arr[mid]!=arr[mid+1]&&arr[mid]!=arr[mid-1]){
      return arr[mid];
    }
    if((mid%2==1 && arr[mid]==arr[mid-1]) || (mid%2==0 &&arr[mid]==arr[mid+1])){
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
  cout<< " enter  the n:- ";
  cin>>n;
  vector<int> arr(n);

  cout<< " enter the arrays " <<endl;
  for(auto &it:arr){
   cin>>it;
  }
 cout<<endl;
 cout<< " The arrays are "<<endl;
 for(auto it:arr){
   cout<<it << " " <<endl;
  }

int cancel= print(arr,n);

if(cancel==-1){
  cout<< "No element found";
}
else{
  cout<<  " The element is " << cancel << endl;
}

return 0;

}