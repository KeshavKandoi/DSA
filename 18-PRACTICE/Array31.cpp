// print pascal triangle 
#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> generate(int numRows) {

    vector<vector<int>> ans;

    for(int i = 0; i < numRows; i++) {

        vector<int> temp;
        long long res = 1;

        temp.push_back(1);

        for(int j = 1; j <= i; j++) {
            res = res * (i - j + 1);
            res = res / j;

            temp.push_back(res);
        }

        ans.push_back(temp);
    }

    return ans;
}

int main() {

    int row;

    cout << "Enter the value of row" << endl;
    cin >> row;

    vector<vector<int>> result = generate(row);

    for(int i = 0; i < result.size(); i++) {

        for(int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}