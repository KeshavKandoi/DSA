// rotation by 90 degree

#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

    void rotate(vector<vector<int>>& matrix) {

        int n = matrix.size();
        int m = matrix[0].size();

        // Transpose
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < m; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // Reverse each row
        for(int i = 0; i < n; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }

    int main(){
      int n;
      int m;

    
      cout<<"enter the row(n)"<<endl;
      cin>>n;

      cout<<"enter the column(m)"<<endl;
      cin>>m;

      vector<vector<int>>matrix(n,vector<int>(m));

   
      cout<<"enter the value of array"<<endl;

      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          cin>>matrix[i][j];
        }
      }

      cout<<"The value is "<<endl;

       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
      }

      rotate(matrix);

    cout << "Rotated Matrix:" << endl;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
    
        
