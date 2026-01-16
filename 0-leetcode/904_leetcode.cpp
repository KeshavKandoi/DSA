/*
#include<iostream>
#include<set>
#include<vector>
using namespace std;

int print(vector<int>& nums){
int maxlength=0;

for(int i=0;i<nums.size();i++){
  set<int> st;
  for(int j=i;j<nums.size();j++){
     st.insert(nums[j]);
    if(st.size()<=2){
      int length=j-i+1;
      maxlength=max(length,maxlength);
    }
    else{
      break;
    }
  }
}
return maxlength;
}
int main(){
  int n;
  cout<< " Enter the value of n "<<endl; 
  cin>>n;
  vector<int>nums(n);
  cout<< " enter the array "<<endl;
  for(int i=0;i<n;i++){
    cin>>nums[i];
  }
cout<< " \nthe array is \n"<<endl;
  for(int i=0;i<n;i++){
    cout<<nums[i]<<" ";
  }
cout<<endl;

  cout<< print(nums)<<endl;;
}
*/
#include<iostream>
#include<map>
#include<vector>
using namespace std;

int print(vector<int>&nums,int k){
  int l=0;
  int r=0;
  int maxlength=0;
  map<int,int>mp;

  while(r<nums.size()){
    mp[nums[r]]++;
     

      while(mp.size()>k){
        mp[nums[l]]--;
        if(mp[nums[l]]==0){
        mp.erase(nums[l]);
        }
     l++;
      }
      if(mp.size()<=k){
        maxlength=max(maxlength,r-l+1);
      }
      r++;
  
  }
return maxlength;
}
int main(){
    int n, k;
    cout << " Enter the value of n " << endl; 
    cin >> n;
    vector<int> nums(n);
    cout << " enter the array " << endl;
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    cout << " \nthe array is \n" << endl;
    for(int i = 0; i < n; i++){
        cout << nums[i] << " ";
    }
    cout << endl;

    cout << " Enter the  k ";
    cin >> k;

    cout << print(nums, k) << endl;
}