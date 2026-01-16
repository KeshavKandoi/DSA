

#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>>zeroMatrix(vector<vector<int>>  &matrix,int n,int m){

vector<int> row(n, 0);
vector<int> column(m, 0);

  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(matrix[i][j]==0){
      row[i]=1;
      column[j]=1;

    }
  }
 
}
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(row==1||column==1){
        matrix[i][j]=0
      }
    }
}
return matrix;
}
