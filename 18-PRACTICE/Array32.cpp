
// Majority Element II using Hash Map

// #include <iostream>
// #include <unordered_map>
// #include <vector>

// using namespace std;

// vector<int> majorityElement(vector<int>& nums) {

//     unordered_map<int, int> hash;
//     int n = nums.size();
//     vector<int> ans;

//     for(int i = 0; i < n; i++) {
//         hash[nums[i]]++;
//     }

//     for(auto it : hash) {
//         if(it.second > n / 3) {
//             ans.push_back(it.first);
//         }
//     }

//     return ans;
// }

// int main() {

//     int n;
//     cout << "Enter size of array: ";
//     cin >> n;

//     vector<int> nums(n);

//     cout << "Enter elements: ";
//     for(int i = 0; i < n; i++) {
//         cin >> nums[i];
//     }

//     vector<int> ans = majorityElement(nums);

//     cout << "Majority Elements: [";

//     for(int i = 0; i < ans.size(); i++) {
//         cout << ans[i];

//         if(i != ans.size() - 1) {
//             cout << ", ";
//         }
//     }

//     cout << "]";

//     return 0;
// }



// optimal method

#include <iostream>
#include<algorithm>
#include <vector>

using namespace std;

    vector<int> majorityElement(vector<int>& nums) {
        
        int n=nums.size();
        int element1=INT_MIN;
        int element2=INT_MIN;
        int count1=0;
        int count2=0;
        vector<int>ans;

        for(int i=0;i<n;i++){
            if(count1==0&&nums[i]!=element2){
                element1=nums[i];
                count1=1;
            }
            else if(count2==0&&nums[i]!=element1){
                element2=nums[i];
                count2=1;
            }

            else if(nums[i]==element1){
                count1++;
            }
            else if(nums[i]==element2){
                count2++;
            }
            else{
                count1--;
                count2--;
            }
        }

        count1=0;
        count2=0;

        for(int i=0;i<n;i++){
            if(element1==nums[i]){
                count1++;
            }
            else if (element2==nums[i]){
                count2++;
            }
        }
            int mini=(n/3);

            if(count1>mini){
                ans.push_back(element1);
            }
            if(count2>mini){
                 ans.push_back(element2);

            }

        
        return ans;
    }

int main() {

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> ans = majorityElement(nums);

    cout << "Majority Elements: [";

    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i];

        if(i != ans.size() - 1) {
            cout << ", ";
        }
    }

    cout << "]";

    return 0;
}