/*
#include<iostream>    // brute force
#include<vector>
using namespace std;

vector<vector<int>>print(vector<vector<int>>&matrix){
  int row= matrix.size();
  int column=matrix[0].size();
  int i=0;
  int j=0;
  int y=column-1;
  vector<vector<int>> ans =matrix;
 
  while(i<=j){
    for(i=0;i<row;i++){
      for(j=0;j<column/2;j++){
    swap(ans[i][j],ans[i][column-j-1]);
      }
    }
    break;

}
 cout << "ans:" << endl;
    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return ans;
}
int main(){
  int nrow,mcolumn;
  cout<< "Enter the numbers of rows and columns " <<endl;
  cin>>nrow>>mcolumn;

  vector<vector<int>>mat(nrow,vector<int>(mcolumn));

  cout<< "Enter the rows and  columns " <<endl;
  for(int i=0;i<nrow;i++){
    for(int j=0;j<mcolumn;j++){
   cin>>mat[i][j];
  }
  }
  cout<< "\nThe rows and columns are \n" <<endl;
  for(int i=0;i<nrow;i++){
    for(int j=0;j<mcolumn;j++){
   cout<<mat[i][j]<<" ";
}
cout<<endl;
  }
vector<vector<int>>ans = print(mat);

}
*/



#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<vector<int>>& matrix) {

  int n=matrix.size();

  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      swap(matrix[i][j],matrix[j][i]);
    }
  }
  for(int i=0;i<n;i++){
  reverse(matrix[i].begin(),matrix[i].end());

  }
}
int main(){
  int nrow,mcolumn;
  cout<< "Enter the numbers of rows and columns " <<endl;
  cin>>nrow>>mcolumn;

  vector<vector<int>>mat(nrow,vector<int>(mcolumn));

  cout<< "Enter the rows and  columns " <<endl;
  for(int i=0;i<nrow;i++){
    for(int j=0;j<mcolumn;j++){
   cin>>mat[i][j];
  }
  }
  cout<< "\nThe rows and columns are \n" <<endl;
  for(int i=0;i<nrow;i++){
    for(int j=0;j<mcolumn;j++){
   cout<<mat[i][j]<<" ";
}
cout<<endl;
  }
  rotate(mat);
for(int i=0;i<nrow;i++){
  for(int j=0;j<mcolumn;j++){
    cout<< mat[i][j]<< "  " ;
  }
}

}