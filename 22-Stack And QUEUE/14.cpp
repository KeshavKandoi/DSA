// 503. Next Greater Element II

// 503. Next Greater Element II

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<int> nextGreaterElements(vector<int>& nums) {
    int n = nums.size();
    stack<int> st;
    vector<int> ans(n, -1);

    for (int i = 2 * n - 1; i >= 0; i--) {

        while (!st.empty() && st.top() <= nums[i % n]) {
            st.pop();
        }

        if (!st.empty()) {
            ans[i % n] = st.top();
        }

        st.push(nums[i % n]);
    }

    return ans;
}

int main() {

    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter the elements:\n";

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> ans = nextGreaterElements(nums);

    cout << "Next Greater Elements are:\n";

    for (int x : ans) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}