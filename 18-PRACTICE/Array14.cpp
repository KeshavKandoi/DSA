// 75. Sort Colors


// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> print(vector<int>&nums){
//   int n=nums.size();

//  int count1=0;
//  int  count2=0;
//   int count3=0;

// for(int i=0;i<n;i++){
//   if(nums[i]==0){
//     count1++;

//   }
//   else if(nums[i]==1){
//     count2++;
//   }
//   else{
//     count3++;
//   }
// }

// for(int i=0;i<count1;i++){
//   nums[i]=0;
// }
// for( int j=count1;j<count1+count2;j++){
// nums[j]=1;
// }
// for(int k=count1+count2;k<n;k++){
// nums[k]=2;
// }
// return nums;
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

//     vector<int> value = print(arr);

//     cout << "Answer is: [";
//     for(int i = 0; i < value.size(); i++) {
//         cout << value[i];
//         if(i != value.size() - 1) {
//             cout << ",";
//         }
//     }
//     cout << "]" << endl;
// }

// optimal Dutch flag algorithm


#include<iostream>
#include<vector>
using namespace std;

vector<int> print(vector<int>&nums){
  int n=nums.size();

  int low=0;
  int mid=0;
  int high=n-1;

  while(mid <= high){
    if(nums[mid]==0){
      swap(nums[mid],nums[low]);
      low++;
      mid++;
    }

    else if(nums[mid]==1){
      mid++;
    }
    else{
      swap(nums[mid],nums[high]);
      high--;
  
    }
  }
  return nums;
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

    vector<int> value = print(arr);

    cout << "Answer is: [";
    for(int i = 0; i < value.size(); i++) {
        cout << value[i];
        if(i != value.size() - 1) {
            cout << ",";
        }
    }
    cout << "]" << endl;
}
