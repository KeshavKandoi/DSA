// #include<iostream>
// #include<vector>
// #include<cmath>
// #include<climits>

// using namespace std;

// int frog(int n,vector<int>&h){
// if(n==0){
//   return 0;
// }
//  int l=frog(n-1,h)+abs(h[n]-h[n-1]);


//     int r = INT_MAX;

// if(n>1){
//  int r=frog(n-2,h)+abs(h[n]-h[n-2]);
// }
// return min(l,r);
// }
// int main(){
//   int n;
//   cout<<"Enter the value of n";
//   cin>>n;

//   vector<int>h(n);
//   for(int i = 0; i < n; i++){
//         cin >> h[i];
//     }

//     cout << frog(n - 1, h);
// }


// #include<iostream>
// #include<vector>
// #include<cmath>
// #include<climits>

// using namespace std;

// int frog(int n,vector<int>&h,vector<int>&dp){
// if(n==0){
//   return 0;
// }
// if(dp[n]!=-1){
//   return dp[n];
// }

//  int l=frog(n-1,h,dp)+abs(h[n]-h[n-1]);


//     int r = INT_MAX;

// if(n>1){
//  int r=frog(n-2,h,dp)+abs(h[n]-h[n-2]);
// }
// return dp[n]=min(l,r);
// }

// int main(){
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     vector<int> h(n);
//     for(int i = 0; i < n; i++){
//         cin >> h[i];
//     }

//     vector<int> dp(n, -1);   // memoization array

//     cout << frog(n - 1, h, dp);
// }


// #include<iostream>
// #include<vector>
// #include<cmath>
// #include<climits>

// using namespace std;

// int frogJump(int n, vector<int>& h) {
//     vector<int> dp(n, 0);

//     dp[0] = 0;  // base case

//     for(int i = 1; i < n; i++){
//         int left = dp[i - 1] + abs(h[i] - h[i - 1]);

//         int right = INT_MAX;
//         if(i > 1){
//             right = dp[i - 2] + abs(h[i] - h[i - 2]);
//         }

//         dp[i] = min(left, right);
//     }

//     return dp[n - 1];
// }

// int main(){
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     vector<int> h(n);
//     for(int i = 0; i < n; i++){
//         cin >> h[i];
//     }

//     cout << frogJump(n, h);
// }

#include<iostream>
#include<vector>
#include<cmath>
#include<climits>

using namespace std;

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> h(n);
    for(int i = 0; i < n; i++){
        cin >> h[i];
    }

    // base cases
    int prev2 = 0; // dp[0]
    int prev1 = abs(h[1] - h[0]); // dp[1]

    for(int i = 2; i < n; i++){
        int left = prev1 + abs(h[i] - h[i - 1]);
        int right = prev2 + abs(h[i] - h[i - 2]);
        int curr = min(left, right);

        prev2 = prev1;
        prev1 = curr;
    }

    cout << prev1;
}
