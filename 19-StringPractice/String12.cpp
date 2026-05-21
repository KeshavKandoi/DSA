// 13. Roman to Integer
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int romanToInt(string s) {
    unordered_map<char, int> mp = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    int ans = 0;
    int n = s.size();

    for (int i = 0; i < n; i++) {
        if (i + 1 < n && mp[s[i]] < mp[s[i + 1]]) {
            ans -= mp[s[i]];
        } else {
            ans += mp[s[i]];
        }
    }

    return ans;
}

int main() {
    string s;

    cout << "Enter Roman Numeral: ";
    cin >> s;

    int result = romanToInt(s);

    cout << "Integer value: " << result << endl;

    return 0;
}
