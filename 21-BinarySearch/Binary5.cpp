// floor and ceil value 

#include<iostream>
#include<vector>

using namespace std;

 vector<int> getFloorAndCeil(vector<int> nums, int x) {
  int n=nums.size();
  int low=0;
  int high=n-1;
  int ans=-1;
  int sol=0;
  int maxi=-1;

  while(low<=high){

    int mid=low+(high-low)/2;

  
    if(nums[mid]>=x){
      ans=nums[mid];
      high=mid-1;
    }
    else{
      sol=nums[mid];
      maxi=max(sol,maxi);
      low=mid+1;
    }
  }
  return{ans,maxi};
 }
 int main(){
      int n;
      cout<<"Enter the value of n:";
      cin>>n;
     

      int target;
      cout<<"Enter the value of target"<<endl;
      cin>>target;

       vector<int>kk(n);

      cout<<"Enter the value of array"<<endl;


      for(int i=0;i<n;i++){
        cin>>kk[i];

      }

    cout<<"The array value is"<<endl;

          for(int i=0;i<n;i++){
            cout<<kk[i]<<" ";

          }
          cout<<endl;
   
      
          vector<int>nums=getFloorAndCeil(kk,target);
          cout << "ceil = " << nums[0] << endl;
          cout << "floor = " << nums[1] << endl;

    }