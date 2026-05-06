// TWO SUM

// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> print(vector<int>& nums, int target) {
//     int n = nums.size();

//     for(int i = 0; i < n; i++) {
//         for(int j = i + 1; j < n; j++) {
//             if(nums[i] + nums[j] == target) {
//                 return {i, j};
//             }
//         }
//     }

//     return {};
// }

// int main() {
//     int n;
//     cout << "Enter the size of array" << endl;
//     cin >> n;

//     int k;
//     cout << "Enter the value of target" << endl;
//     cin >> k;

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

//     vector<int> value = print(arr, k);

//     cout << "Answer is: [";
//     for(int i = 0; i < value.size(); i++) {
//         cout << value[i];
//         if(i != value.size() - 1) {
//             cout << ",";
//         }
//     }
//     cout << "]" << endl;
// }

// better way


#include<iostream>
#include<vector>

using namespace std;

vector<int>print(vector<int>&nums,int target){
  int n=nums.size();

  unordered_map<int,int>hash;

  for(int i=0;i<n;i++){
    int left=target-nums[i];

    if(hash.find(left)!=hash.end()){
    return {hash[left],i};

    }
    hash[nums[i]]=i;
  }
    return {};
    
  
}

int main() {
    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;

    int k;
    cout << "Enter the value of target" << endl;
    cin >> k;

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

    vector<int> value = print(arr, k);

    cout << "Answer is: [";
    for(int i = 0; i < value.size(); i++) {
        cout << value[i];
        if(i != value.size() - 1) {
            cout << ",";
        }
    }
    cout << "]" << endl;
}
