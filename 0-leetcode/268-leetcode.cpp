#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int print(vector<int>&arr,int N){

int sum= N*(N+1)/2;
int s2=0;

for(int i=0 ; i<N ; i++){
  s2+=arr[i];
}
return sum-s2;
}

int  main(){
  int N;
cout<< "Enter the  N "<<endl;
cin>>N;


  vector <int> arr(N-1);
cout<< " Enter the Arrays "<<endl;

for(int i=0;i<N-1;i++){
  cin>> arr[i];
}

cout<< "The array is" <<endl;
for(auto i: arr){
  cout<< i <<endl;
}
cout<< " The missing number is " << print(arr,N) << endl;
}