// FLOYD WARSHALL ALGORITHM

#include<iostream>
#include<vector>
#include <climits>

using namespace std;

vector<vector<int>> warshall(vector<vector<int>>& adj){

int n=adj.size();

for(int i=0;i<n;i++){
  for(int j=0;j<n;j++){
   if(adj[i][j]== -1){
    adj[i][j]=INT_MAX;
   }
   if(i==j) adj[i][j]=0;
}
}

for(int k=0;k<n;k++){
  for(int i=0;i<n;i++){
  for(int j=0;j<n;j++){
  if(adj[i][k] != INT_MAX && adj[k][j] != INT_MAX){
    adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);

  }
}
}
}
// negative cycle
 for(int i=0;i<n;i++){
    if(adj[i][i]<0){
      cout<<"negative cycle"<<endl;
    }
}
for(int i=0;i<n;i++){
  for(int j=0;j<n;j++){
   if(adj[i][j]== INT_MAX){
    adj[i][j]=-1;
   }
}
}
return adj;
}

int main() {
    int n, m;
    cout<<"Enter the value of node and edge"<<endl;
    cin >> n >> m;

    vector<vector<int>> adj(n, vector<int>(n, -1));

    for (int i = 0; i < m; i++) {
        int u, v, w;
        cout<<"Enter u,v,w"<<endl;
        cin >> u >> v >> w;
        adj[u][v] = w;   // directed weighted edge
    }

    adj = warshall(adj);

    cout << "\nShortest Distance Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}