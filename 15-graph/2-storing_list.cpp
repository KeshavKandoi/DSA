// UNDIRECTED GRAPH

#include<iostream>
#include<vector>
using namespace std;

int main(){
  cout<<"Enter the value of n and m"<<endl;
  int n,m;
  cin>>n>>m;
  vector<vector<int>>adj(n+1);// 1 based indexing 
  for(int i=0;i<m;i++){
    int u,v;
    cout<<"Enter the value of u and v"<<endl;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  cout << "\nAdjacency List:\n"; 
  for(int i = 1; i <= n; i++){
     cout << i << " -----------> ";
      for(int j = 0; j < adj[i].size(); j++){
         cout << adj[i][j] << " ";
         }
          cout << endl; 
          } 
          return 0; 
          }


 // DIRECTED GRAPH 

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//   int n,m;
//   cin>>n>>m;
//   vector<int>adj[n+1];
//   for(int i=0;i<m;i++){
//     int u,v;
//     cin>>u>>v;
//     adj[u].push_back(v);

//   }
//   return 0;
// }





