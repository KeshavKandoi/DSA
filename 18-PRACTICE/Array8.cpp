// Union of two sorted arrays
#include<iostream>
#include<vector>
#include<set>
using namespace std;

vector<int>print(vector<int>&arr1,vector<int>arr2){
  int n=arr1.size();
  int m=arr2.size();
  set<int>s;


for(int i=0;i<n;i++){
  s.insert(arr1[i]);
}

for(int j=0;j<m;j++){
  s.insert(arr2[j]);
}

vector<int>ans;

for(int x:s){
  ans.push_back(x);
}
return ans;

}

int main(){
int n;
int m;

cout<<"Enter the size of 1st array"<<endl;
cin>>n;


vector<int>arr1(n);


cout<<"Enter the array"<<endl;
for(int i=0;i<n;i++){
  cin>>arr1[i];
}
cout<<"The array is "<<endl;
for(int i=0;i<n;i++){
  cout<<arr1[i];
  cout<<" ";
}
cout<<endl;

cout<<"Enter the size of 2nd array"<<endl;
cin>>m;
vector<int>arr2(m);


cout<<"Enter the array"<<endl;
for(int j=0;j<m;j++){
  cin>>arr2[j];
}
cout<<"The array is "<<endl;
for(int j=0;j<m;j++){
  cout<<arr2[j];
  cout<<" ";
}


cout<<endl;
vector<int>value=print(arr1,arr2);

for(int x:value){
  cout<<x<<" ";
}

}



