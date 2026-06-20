// Leaders in an Array

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> leaders(vector<int>& nums) {

    int n = nums.size();
    vector<int> ans;

    int maxi = nums[n - 1];
    ans.push_back(maxi);

    for(int i = n - 2; i >= 0; i--) {

        if(nums[i] > maxi) {
            ans.push_back(nums[i]);
            maxi = nums[i];
        }
    }

    reverse(ans.begin(), ans.end());

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

    vector<int> ans = leaders(nums);

    cout << "Leaders: [";

    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i];

        if(i != ans.size() - 1)
            cout << ", ";
    }

    cout << "]";

    return 0;
}