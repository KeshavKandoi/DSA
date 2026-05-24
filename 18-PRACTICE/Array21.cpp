// Three sum 






// #include<iostream>
// #include<vector>
// #include<set>


// using namespace std;

//  vector<vector<int>> threeSum(vector<int>& nums) {
//    int n=nums.size();
//    set<vector<int>> st;



//    for(int i=0;i<n;i++){
//     for(int j=i+1;j<n;j++){
//       for(int k=j+1;k<n;k++){
        
//         if(nums[i]+nums[j]+nums[k]==0){
//           vector<int> value={nums[i],nums[j],nums[k]};
//           sort(value.begin(),value.end());
//           st.insert(value);
//         }

//       }
//     }
//    }
//    return  vector<vector<int>>(st.begin(),st.end());

//   }

// int main(){

//   int n;
//     cout << "Enter size: ";
//     cin >> n;

//     vector<int> nums(n);

//   cout<<"Enter the value of array"<<endl;

//   for(int i=0;i<n;i++){
//     cin>>nums[i];
//   }

//   cout<<endl;

//   cout<<"The array is "<<endl;
//   for(int i=0;i<n;i++){
//     cout<<nums[i]<<" ";
//   }
// cout<<endl;
//   vector<vector<int>> ans;

//   ans=threeSum(nums);

//   cout<<"The value is"<<endl;

//   for(auto x:ans){
//       cout << "[ ";
//     for(auto y:x){
//     cout<<y<<" ";
//   }
// cout << "]" << endl;
//   }
// return 0;

// }






// #include <iostream>
// #include <vector>
// #include <set>
// #include <unordered_map>
// #include <algorithm>

// using namespace std;

// vector<vector<int>> threeSum(vector<int>& nums) {
//     int n = nums.size();
//     set<vector<int>> st;

//     for(int i = 0; i < n; i++) {
//         unordered_map<int,int> s1;

//         for(int j = i + 1; j < n; j++) {
//             int left = -(nums[i] + nums[j]);

//             if(s1.find(left) != s1.end()) {
//                 vector<int> temp = {nums[i], nums[j], left};
//                 sort(temp.begin(), temp.end());
//                 st.insert(temp);
//             }

//             s1[nums[j]] = j;
//         }
//     }

//     return vector<vector<int>>(st.begin(), st.end());
// }

// int main() {
//     int n;
//     cout << "Enter size: ";
//     cin >> n;

//     vector<int> nums(n);

//     cout << "Enter array values:\n";
//     for(int i = 0; i < n; i++) {
//         cin >> nums[i];
//     }

//     vector<vector<int>> ans = threeSum(nums);

//     cout << "Triplets:\n";
//     for(auto x : ans) {
//         cout << "[ ";
//         for(auto y : x) {
//             cout << y << " ";
//         }
//         cout << "]" << endl;
//     }

//     return 0;
// }










#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

vector<vector<int>> threeSum(vector<int>&nums){

int n=nums.size();
vector<vector<int>>ans;
sort(nums.begin(),nums.end());

for(int i=0;i<n;i++){

  if(i>0&&nums[i]==nums[i-1]){
    continue;
  }

  int j=i+1;
  int k=n-1;

while(j<k){
  int sum=nums[i]+nums[j]+nums[k];

  if(sum<0){
    j++;
  }
  else if(sum>0){
    k--;
  }
  else{
    ans.push_back({nums[i],nums[j],nums[k]});

    while(j<k&&nums[j]==nums[j+1]){
      j++;
    }
     while(j<k&&nums[k]==nums[k-1]){
      k--;
    }
    j++;
    k--;

    

  }
}
}
return ans;


}

int main(){

  int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> nums(n);

  cout<<"Enter the value of array"<<endl;

  for(int i=0;i<n;i++){
    cin>>nums[i];
  }

  cout<<endl;

  cout<<"The array is "<<endl;
  for(int i=0;i<n;i++){
    cout<<nums[i]<<" ";
  }
cout<<endl;
  vector<vector<int>> ans;

  ans=threeSum(nums);

  cout<<"The value is"<<endl;

  for(auto x:ans){
      cout << "[ ";
    for(auto y:x){
    cout<<y<<" ";
  }
cout << "]" << endl;
  }
return 0;

}