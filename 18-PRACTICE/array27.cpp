// 5 SUM


#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;


    vector<vector<int>> FiveSum(vector<int>& nums, int target) {

      int n=nums.size();
      sort(nums.begin(),nums.end());
  
      vector<vector<int>>ans;

      for(int i=0;i<n-4;i++){
        if(i>0&&nums[i]==nums[i-1]){
          continue;
      }
      for(int j=i+1;j<n-3;j++){
        if(j>i+1&&nums[j]==nums[j-1]){
          continue;
        }
         for(int k=j+1;k<n-2;k++){
        if(k>j+1&&nums[k]==nums[k-1]){
          continue;
        }

        int l=k+1;
        int m=n-1;

        while(l<m){

        long long  sum=(long long)nums[i]+nums[j]+nums[k]+nums[l]+nums[m];

        if(sum==target){
          ans.push_back({nums[i],nums[j],nums[k],nums[l],nums[m]});
          l++;
          m--;

          while(l<m&&nums[l]==nums[l-1]){
            l++;
          }
          while(l<m&&nums[m]==nums[m+1]){
            m--;
        }
      }
        else if(sum>target){
          m--;
        }
        else{
          l++;
        }
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

  ans=FiveSum(nums,target);

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