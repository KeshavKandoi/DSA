// Upper bound 

#include<iostream>
#include<vector>

using namespace std;


int upperBound(vector<int> &nums, int x){

  

        int n=nums.size();
        int low=0;
        int high=n-1;
        int ans=n;

        while(low<=high){
          
          int mid=low+(high-low)/2;

          if(nums[mid]>x){
            high=mid-1;
            ans=mid;
          }
         
          else{
            low=mid+1;
          }
        }
          return ans;
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

          cout<<"The index is:"<< upperBound(kk,target)<<endl;

    }