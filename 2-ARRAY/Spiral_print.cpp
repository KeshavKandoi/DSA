#include<iostream>
#include<vector>
using namespace std;

vector<int>print(vector<vector<int>>&mat){
  int n=mat.size(); // row
  int m=mat[0].size();//column
  int top=0;
  int bottom=n-1;
  int left=0;
  int right=m-1;
  vector<int> ans;

while(left<=right && top<=bottom){

  for(int i=left;i<=right;i++){
   ans.push_back(mat[top][i]);
  }
  top++;
  for(int i=top;i<=bottom;i++){
    ans.push_back(mat[i][right]);
  }
  if(top<=bottom){
  right--;
  for(int i=right;i>=left;i--){
    ans.push_back(mat[bottom][i]);
  }
  bottom--;
  }
  if(left<=right){
  for(int i=bottom;i>=top;i--){
    ans.push_back(mat[i][left]);
  }
 left++;
}
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
vector<int> ans = print(mat);

    cout << "Spiral order: ";
    for (auto i : ans) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
