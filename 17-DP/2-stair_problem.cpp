
// #include<iostream>
// using namespace std;

// int climb(int n){
//     if(n == 0) return 1;
//     if(n < 0) return 0;

//     return climb(n-1) + climb(n-2);
// }

// int main(){
//     int n;
//     cout << "enter the value of n: ";
//     cin >> n;
//     cout << climb(n);
// }





// #include <iostream>
// using namespace std;

// int climbStairs(int n) {
//    if (n < 0) return 0;
//   if (n <= 1) return 1;


//     int prev2 = 1; // ways(0)
//     int prev1 = 1; // ways(1)

//     for (int i = 2; i <= n; i++) {
//         int cur = prev1 + prev2;
//         prev2 = prev1;
//         prev1 = cur;
//     }

//     return prev1;
// }

// int main() {
//     int n;
//     cin >> n;
//     cout << climbStairs(n) << endl;
//     return 0;
// }



// #include <iostream>
// #include <vector>
// using namespace std;

// int solve(int n, vector<int>& dp) {
//     if(n == 0) return 1;
//     if(n < 0) return 0;

//     if (dp[n] != -1)
//         return dp[n];

//     return dp[n] = solve(n - 1, dp) + solve(n - 2, dp);
// }

// int climbStairs(int n) {
//     vector<int> dp(n + 1, -1);
//     return solve(n, dp);
// }

// int main() {
//     int n;
//     cin >> n;
//     cout << climbStairs(n) << endl;
//     return 0;
// }





  