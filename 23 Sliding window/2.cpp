// 26. Remove Duplicates from Sorted Array

#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    int n = nums.size();

    if (n == 0) {
        return 0;
    }

    int sum = 1;
    int i = 0;
    int j = i + 1;

    while (j < n) {

        if (nums[i] != nums[j]) {
            i++;
            sum++;
            nums[i] = nums[j];
            j++;
        }
        else {
            j++;
        }
    }

    return sum;
}

int main() {

    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> ans(n);

    cout << "Enter array: ";

    for (int i = 0; i < n; i++) {
        cin >> ans[i];
    }

    cout << "The array is: ";

    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }

    
    cout << endl;

    int k = removeDuplicates(ans);

    cout << "Number of unique elements: " << k << endl;

    cout << "The new array is: [";

    for (int i = 0; i < k; i++) {
        if (i > 0) {
            cout << ",";
        }

        cout << ans[i];
    }

    cout << "]" << endl;

    return 0;
}