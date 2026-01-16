#include<iostream>
using namespace std;


void print(int index,vector<int> & ds,int arr[],int s,int sum,int n){
  if (index==n){
    if(s==sum){
    for(auto it :ds){
      cout << it << " ";
    }
    cout<<endl;
    }
    return ;
  }
  ds.push_back(arr[index]);
  s+=arr[index];
  print(index+1,ds,arr,s,sum,n);
  s-=arr[index];
  ds.pop_back();
  print(index+1,ds,arr,s,sum,n);

}

int main(){
  int n=3;
  int sum=2;
  int arr[]={1,2,1};
  vector<int>ds;
  print(0,ds,arr,0,sum,n);

return 0;
}