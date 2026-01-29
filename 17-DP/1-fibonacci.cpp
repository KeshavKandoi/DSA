// Memoization (Top-Down Dynamic Programming)  1ST ONE

// #include<iostream>
// #include<vector>

// using namespace std;

// int fibonacci(int n,vector<int>&dp){

//   if(n<=1){
//     return n;
//   }
//   if(dp[n]!=-1){
//     return dp[n];
//   }
//   return dp[n]= fibonacci(n-1,dp)+fibonacci(n-2,dp);

// }
// int main(){
//   int n;
//   cout<<"enter the value of n"<<endl;
//   cin>>n;
//   vector<int>dp(n+1,-1);
//   cout<<fibonacci(n,dp)<<endl;
// }



// 2nd  Tabulation (Bottom-Up DP)

#include<iostream>
using namespace std;

int main(){
  int n;
  cout<< " ENTER THE VALUE OF N " <<endl;
  cin>>n;

  if(n<=1){
    cout<<n;
    return 0;
  }
  int prev2=0;
  int prev1=1;

 for(int i=2;i<=n;i++){
  int prev=prev1+prev2;
  prev2=prev1;
  prev1=prev;
 }
 cout<< prev1<<endl;
 
}

