
// pascal finding all number of row with row number

#include<iostream>
using namespace std;

void printRow(int row) {

  long long res=1;

        cout << res << " ";


  for(int i=1;i<=row;i++){

    res=res*(row-i+1);
    res=res/i;

        cout << res << " ";

  }

}


int main() {

    int row;
    cin >> row;

    printRow(row);
}