// 80. Remove Duplicates from Sorted Array II

#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {

    int n = nums.size();
    int i = 0;
    int count = 0;

    for (int j = 0; j < n; j++) {

        if (j == 0 || nums[j] == nums[j - 1]) {
            count++;
        }
        else {
            count = 1;
        }

        // Keep each element at most twice
        if (count <= 2) {
            nums[i] = nums[j];
            i++;
        }
    }

    return i;
}

int main() {

    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter sorted array: ";

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Original array: [";

    for (int i = 0; i < n; i++) {
        if (i > 0) {
            cout << ",";
        }

        cout << nums[i];
    }

    cout << "]" << endl;


    int k = removeDuplicates(nums);

    cout << "New length: " << k << endl;

    cout << "New array: [";

    for (int i = 0; i < k; i++) {
        if (i > 0) {
            cout << ",";
        }

        cout << nums[i];
    }

    cout << "]" << endl;

    return 0;
}