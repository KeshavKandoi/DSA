// Next Smaller Element

#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> nextSmallerElements(const vector<int>& arr) {
        int n=arr.size();
        vector<int>s(n);
        stack<int>st;
        

        for(int i=n-1;i>=0;i--){
            while(!st.empty()&&st.top()>=arr[i]){
                st.pop();
            }
            if(st.empty()){
                s[i]=-1;
            }
            else{
                s[i]=st.top();
            }
            st.push(arr[i]);
        }
        return s;
        
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

    vector<int> ans =nextSmallerElements(nums);

    cout << "Next smaller Elements are:\n";

    for (int x : ans) {
        cout << x << " ";
    }

    cout << endl;


}