#include<iostream>
using namespace std;


bool print(int index,vector<int> & ds,int arr[],int s,int sum,int n){
  if (index==n){
    if(s==sum){
    for(auto it :ds){
      cout << it << " ";

    }
          
    cout<<endl;
    return true;
    }
    return false;
  }
  ds.push_back(arr[index]);
  s+=arr[index];
  if(print(index+1,ds,arr,s,sum,n)==true){
    return true;
  }
  s-=arr[index];
  ds.pop_back();
  if(print(index+1,ds,arr,s,sum,n)==true){
    return true;
  }
return false;
}

int main(){
  int n=3;
  int sum=2;
  int arr[]={1,2,1};
  vector<int>ds;
  print(0,ds,arr,0,sum,n);

return 0;
}