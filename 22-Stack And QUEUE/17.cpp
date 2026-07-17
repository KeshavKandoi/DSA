
// Number of Greater Elements to the Right


#include<iostream>
#include<vector>
using namespace std;

    vector<int> count_NGE(vector<int> &arr, vector<int> &indices) {
        int n=arr.size();
        vector<int>ans;
    for(int idx:indices){
        int count=0;

        for(int j=idx;j<n;j++){
           if (j != idx && arr[j] > arr[idx]) {
            count++;
        }
       
    }
     ans.push_back(count);
    }
    return ans;
    
    }

int main() {

    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int q;
    cout << "Enter the number of queries: ";
    cin >> q;

    vector<int> indices(q);

    cout << "Enter the indices:\n";
    for (int i = 0; i < q; i++) {
        cin >> indices[i];
    }

    vector<int> ans = count_NGE(arr, indices);

    cout << "Answer:\n";
    for (int x : ans) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}