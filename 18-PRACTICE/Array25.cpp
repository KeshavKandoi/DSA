//  73 (Set Matrix Zeroes)



//  BRUTE FORCE 


// #include<iostream>
// #include<vector>

// using namespace std;




//  void row(vector<vector<int>>& matrix,int i,int m){
//         for(int j=0;j<m;j++){
//           if(matrix[i][j]!=0){
//             matrix[i][j]=-1;
            
//           }
//         }
//         }

//          void column(vector<vector<int>>& matrix,int j,int n){
//         for(int i=0;i<n;i++){
//           if(matrix[i][j]!=0){
//             matrix[i][j]=-1;
            
//           }
//         }
//         }


// void setZeroes(vector<vector<int>>& matrix) {
//    int n=matrix.size();
//         int m=matrix[0].size();

//         for(int i=0;i<n;i++){
//           for(int j=0;j<m;j++){
//             if(matrix[i][j]==0){
//               row(matrix,i,m);
//               column(matrix,j,n);
//             }
//           }
//         }



// for(int i=0;i<n;i++){
//   for(int j=0;j<m;j++){
//     if(matrix[i][j]==-1){
//       matrix[i][j]=0;
//     }

//   }
// }
// }



// OPTIMAL 

// void setZeroes(vector<vector<int>>& matrix) {
//         int n=matrix.size();
//         int m=matrix[0].size();

//         vector<int>row(n,1);
//         vector<int>column(m,1);

//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(matrix[i][j]==0){
//                     row[i]=0;
//                     column[j]=0;

//                 }
//             }
//         }

//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(row[i]==0||column[j]==0){
//                     matrix[i][j]=0;
//                 }
//             }
//         }



        
    

