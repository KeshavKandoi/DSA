// 704. Binary Search
#include<iostream>
#include<vector>

using namespace std;

int search(vector<int>& nums, int target) {

        int n=nums.size();

        for(int i=0;i<n;i++){
            if(nums[i]==target){
                return i;
            }
        }
        return -1;
        
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

          cout<<"The index is:"<<search(kk,target)<<endl;

    }
