#include<iostream>
#include<vector>

using namespace std;

    vector<int> spiralOrder(vector<vector<int>>& matrix) {

  int n=matrix.size();
  int m =matrix[0].size();

  int top=0;
  int bottom=n-1;
  int left=0;
  int right=m-1;

  vector<int>ans;

  while(top<=bottom && left<=right){

    for(int i=left;i<=right;i++){
      ans.push_back(matrix[top][i]);
    }
    top++;

    for(int i=top;i<=bottom;i++){
        ans.push_back(matrix[i][right]);

    }
    right--;

if(top<=bottom){
   
      for(int i=right;i>=left;i--){
         ans.push_back(matrix[bottom][i]);
      }
      bottom--;
    }
     if(left<=right){
      for(int i=bottom;i>=top;i--){
        ans.push_back(matrix[i][left]);
      }
      left++;
    }
  }
return ans;

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
      vector<int> ans = spiralOrder(matrix);

      cout<<"the spiral matrix is:";

      for(auto x:ans){
        cout<<x<<" ";
      }

    }
        
