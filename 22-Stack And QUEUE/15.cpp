// 42. Trapping Rain Water

#include <iostream>
#include <vector>
using namespace std;

int trap(vector<int>& height) {

    int n = height.size();

    vector<int> prefix(n);
    vector<int> suffix(n);

    // Build Prefix Array
    prefix[0] = height[0];

    for (int i = 1; i < n; i++) {
        prefix[i] = max(prefix[i - 1], height[i]);
    }

    // Build Suffix Array
    suffix[n - 1] = height[n - 1];

    for (int i = n - 2; i >= 0; i--) {
        suffix[i] = max(suffix[i + 1], height[i]);
    }

    int water = 0;

    for (int i = 0; i < n; i++) {
        water += min(prefix[i], suffix[i]) - height[i];
    }

    return water;
}

int main() {

    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> height(n);

    cout << "Enter the elements:\n";

    for (int i = 0; i < n; i++) {
        cin >> height[i];
    }

    cout << "Water trapped = " << trap(height) << endl;

    return 0;
}