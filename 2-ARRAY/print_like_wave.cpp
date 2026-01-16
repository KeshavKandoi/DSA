#include<iostream>
#include<vector>
using namespace std;

void print( vector<vector<int>>&arr,int nrow ,int mcolumn){

  for(int column =0; column<mcolumn;column++){
    if(column%2!=0){
      for(int row=nrow-1;row>=0;row--){
        cout<<arr[row][column]<<" ";
      }
    }
    else{
      for(int row=0;row<nrow;row++){
        cout<<arr[row][column]<<" ";
      }
    }
  }
   cout << "\n"; 
}
int main(){
  int nrow,mcolumn;
  cout<< " enter no of rows and columns ";
  cin>> nrow >> mcolumn;
   vector<vector<int>> arr(nrow, vector<int>(mcolumn));

  cout<< "\nenter the rows and column\n";
  for (int i = 0; i < nrow; i++) {
        for (int j = 0; j < mcolumn; j++) {
            cin >> arr[i][j];
        }
  }
 for(int i = 0; i < nrow; i++) {
        for (int j = 0; j < mcolumn; j++) {
            cout<< arr[i][j]<<" ";
        }
        cout<<endl;
  }

  cout << "\nWave pattern output:\n";
    print(arr, nrow, mcolumn);

    return 0;
}
    

/*#include <iostream>
using namespace std;

void print(int arr[][100], int nrow, int mcolumn) {
    for (int column = 0; column < mcolumn; column++) {
        if (column % 2 != 0) {
            // bottom to top for odd columns
            for (int row = nrow - 1; row >= 0; row--) {
                cout << arr[row][column] << " ";
            }
        } else {
            // top to bottom for even columns
            for (int row = 0; row < nrow; row++) {
                cout << arr[row][column] << " ";
            }
        }
    }
    cout << "\n";
}

int main() {
    int nrow, mcolumn;
    cout << "Enter number of rows and columns: ";
    cin >> nrow >> mcolumn;

    // ✅ Define a 2D array with max size (example: 100x100)
    int arr[100][100];

    cout << "\nEnter the matrix elements:\n";
    for (int i = 0; i < nrow; i++) {
        for (int j = 0; j < mcolumn; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "\nMatrix elements:\n";
    for (int i = 0; i < nrow; i++) {
        for (int j = 0; j < mcolumn; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nWave pattern output:\n";
    print(arr, nrow, mcolumn);

    return 0;
}
*/