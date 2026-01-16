#include<iostream>
#include<vector>
using namespace std;

int print(vector<int> &arr,int n){
  int maxCnt=1;
  int cnt=1;

for(int i=0;i<n;i++){
    if(arr[i]==arr[i-1]){
      cnt++;
    }
else{
  maxCnt=max(maxCnt,cnt);
  cnt=1;
  
}
  }

maxCnt = max(maxCnt, cnt);
    return maxCnt;
}

int  main(){
  int N;
cout<< "Enter the  N "<<endl;
cin>>N;


  vector <int> arr(N);
cout<< " Enter the Arrays "<<endl;

for(int i=0;i<N;i++){
  cin>> arr[i];
}

cout<< "The array is" <<endl;
for(auto i: arr){
  cout<< i <<endl;
}
cout<< " The maximum consecutive number is " << print(arr,N) << endl;
}

//for consecutive 

/*
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
    
   int n=nums.size(); 
  int maxCnt=0;
  int cnt=0;

for(int i=0;i<n;i++){
    if(nums[i]==1){
      cnt++;
        maxCnt=max(maxCnt,cnt);
    }
else{

  cnt=0;
  
}
  }
    
    return maxCnt;
    } 
};*/