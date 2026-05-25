
// 4 sum 


// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<set>

// using namespace std;

// vector<vector<int>> fourSum(vector<int>& nums, int target) {

//   int n=nums.size();
 
//    set<vector<int>>hash;
//   for(int i=0;i<n;i++){

//     for(int j=i+1;j<n;j++){

//       for(int k=j+1;k<n;k++){

        
//         for(int l=k+1;l<n;l++){

//           long long sum=nums[i]+nums[j]+nums[k]+nums[l];
         
//           if(sum==target){
//             vector<int>ans={nums[i],nums[j],nums[k],nums[l]};
//             sort(ans.begin(),ans.end());
//             hash.insert(ans);

//           }
//       }
//     }
//   }
// }
//  vector<vector<int>> answer(hash.begin(),hash.end());
//  return answer;

// }



#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include <unordered_map>

using namespace std;


vector<vector<int>> fourSum(vector<int>& nums, int target) {

  int n=nums.size();
   vector<vector<int>> ans;
  sort(nums.begin(),nums.end());

  for(int i=0;i<n;i++){
    if(i>0&&nums[i]==nums[i-1]){
      continue;
    }
    for(int j=i+1;j<n;j++){
       if(j>i+1&&nums[j]==nums[j-1]){
      continue;
    }
    int k=j+1;
    int l=n-1;

    while(k<l){
      long long sum=(long long)nums[i]+nums[j]+nums[k]+nums[l];

      if(sum<target){
        k++;
      }
      else if(sum>target){
        l--;
      }

      else{
         ans.push_back({nums[i], nums[j], nums[k], nums[l]});

        while(k<l&& nums[k]==nums[k+1]){
          k++;
        }
         while(k<l&& nums[l]==nums[l-1]){
          l--;
        }
        k++;
        l--;
       
       

      }
    }
  }
 


}
 return ans;
}


int main(){

  int n;
    cout << "Enter size: ";
    cin >> n;

    int target;
     cout << "Enter Target: ";
    cin >> target;


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

  ans=fourSum(nums,target);

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