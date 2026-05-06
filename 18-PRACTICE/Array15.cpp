// 169. Majority Element

// #include<iostream>
// #include<vector>
// #include <unordered_map>

// using namespace std;

// int majorityElement(vector<int>& nums) {
  
 
//   int n=nums.size();
//   unordered_map<int,int>hash;

//   for(int i=0;i<n;i++){
//     hash[nums[i]]++;
//   }

//   for(auto it:hash){
//     if(it.second>n/2){
//       return it.first;
//     }
//   }
// return -1;


// }


// int main() {
//     int n;
//     cout << "Enter the size of array" << endl;
//     cin >> n;

   

//     vector<int> arr(n);

//     cout << "Enter the array" << endl;
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     cout << "The array is " << endl;
//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

// int value = majorityElement(arr);

//     cout<<"The majority element is:"<<value<<endl;

// }

#include<iostream>
#include<vector>
using namespace std;

int print(vector<int>&nums){
  int n = nums.size();

  int candidate=0;
  int count=0;

  for(int i=0;i<n;i++){
    if(count==0){
      candidate=nums[i];
      count=1;
    }
    else if(candidate==nums[i]){
      count++;
    }
    else{
      count--;
    }
  }
  return candidate;
}
int main() {
    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;

   

    vector<int> arr(n);

    cout << "Enter the array" << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "The array is " << endl;
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

int value = print(arr);

    cout<<"The majority element is:"<<value<<endl;

}