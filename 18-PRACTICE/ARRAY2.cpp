// class Solution {
// public:
//     int secondLargestElement(vector<int>& arr) 
//         int n = arr.size();

//         if (n < 2) {
//             return -1;
//         }

//         int largest = INT_MIN;


//         for (int i = 0; i < n; i++) {
//             if (arr[i] > largest) {
//                 largest = arr[i];
//             }
//         }

//         int secondLargest = INT_MIN;


//         for (int i = 0; i < n; i++) {
//             if (arr[i] > secondLargest && arr[i] != largest) {
//                 secondLargest = arr[i];
//             }
//         }


//         if (secondLargest == INT_MIN) {
//             return -1;
//         }

//         return secondLargest;
    
// };


#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int element(vector<int>& arr) {
    int n = arr.size();

    if (n < 2) {
        return -1;
    }

    int nums = INT_MIN;      // largest
    int second = INT_MIN;    // second largest

    for (int i = 0; i < n; i++) {
        if (arr[i] > nums) {
            second = nums;
            nums = arr[i];
        }
        else if (arr[i] > second && arr[i] != nums) {
            second = arr[i];
        }
    }

    if (second == INT_MIN) {
        return -1;
    }

    return second;
}

int main() {
    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;

    if (n <= 0) {
        cout << "Invalid array size" << endl;
        return 0;
    }

    vector<int> arr(n);

    cout << "Enter the array" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "The array is " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int value = element(arr);

    if (value == -1) {
        cout << "Second largest element does not exist" << endl;
    } else {
        cout << "The second largest value is " << value << endl;
    }
}