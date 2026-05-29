// Count Occurrences in a Sorted Array

#include<iostream>
#include<vector>


using namespace std;

    int firstOccurrence(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        int ans = -1;

        while(low <= high) {
            int mid = low + (high - low) / 2;

            if(nums[mid] == target) {
                ans = mid;
                high = mid - 1;
            }
            else if(nums[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return ans;
    }

    int lastOccurrence(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        int ans = -1;

        while(low <= high) {
            int mid = low + (high - low) / 2;

            if(nums[mid] == target) {
                ans = mid;
                low = mid + 1;
            }
            else if(nums[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return ans;
    }

    int countOccurrences(vector<int>& nums, int target) {

      int first = firstOccurrence(nums, target);

    if(first == -1) {
        return 0;
    }

    int last = lastOccurrence(nums, target);

    return last - first + 1;
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
   
      
          int ans=countOccurrences(kk,target);

          cout<<"The number of occurences is :"<<ans;

    }