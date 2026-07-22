// 739. Daily Temperatures
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> dailyTemperatures(vector<int>& temperatures) {
    int n = temperatures.size();
    vector<int> ans(n, 0);
    stack<int> st;   // Stores indices

    for (int i = 0; i < n; i++) {

        while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
            ans[st.top()] = i - st.top();
            st.pop();
        }

        st.push(i);
    }

    return ans;
}

int main() {
    int n;

    cout << "Enter number of days: ";
    cin >> n;

    vector<int> temperatures(n);

    cout << "Enter temperatures: ";
    for (int i = 0; i < n; i++) {
        cin >> temperatures[i];
    }

    vector<int> ans = dailyTemperatures(temperatures);

    cout << "Answer: ";
    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}