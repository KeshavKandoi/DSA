// 704. Binary Search
 

// tc-0(n)

// #include<iostream>
// #include<vector>

// using namespace std;

// int search(vector<int>& nums, int target) {

//         int n=nums.size();

//         for(int i=0;i<n;i++){
//             if(nums[i]==target){
//                 return i;
//             }
//         }
//         return -1;
        
//     }

//     int main(){
//       int n;
//       cout<<"Enter the value of n:";
//       cin>>n;
     

//       int target;
//       cout<<"Enter the value of target"<<endl;
//       cin>>target;

//        vector<int>kk(n);

//       cout<<"Enter the value of array"<<endl;


//       for(int i=0;i<n;i++){
//         cin>>kk[i];

//       }

//     cout<<"The array value is"<<endl;

//           for(int i=0;i<n;i++){
//             cout<<kk[i]<<" ";

//           }
//           cout<<endl;

//           cout<<"The index is:"<<search(kk,target)<<endl;

//     }





// O(logn)

#include<iostream>
#include<vector>

using namespace std;

int search(vector<int>& nums, int target) {

        int n=nums.size();

        int low=0;
        int high=n-1;

        while(low<=high){

            int mid=low+(high-low)/2;

            if(nums[mid]==target){
                return mid;
            }
            else if (nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
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