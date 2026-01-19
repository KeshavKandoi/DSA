#include<iostream>
#include<vector>
using namespace std;

bool dfs(vector<vector<int>>&adj,int node,vector<int>&vis){


  for(auto it:adj[node]){
    if(vis[it]==-1){
       vis[it] = !vis[node];  
      if(dfs(adj,it,vis)==false) return false;
    }
    else if(vis[it]==vis[node]){
      return false;
    }
  }
  return true;

}
 
int main(){
  int n,m;
  cout<< "Enter the n--node and m--edge"<<endl;
  cin>>n>>m;
  vector<vector<int>>adj(n+1);
  
  for(int i=0;i<m;i++){
    int u,v;
  cout<<"enter u and v"<<endl;
  cin>>u>>v;

    adj[u].push_back(v);
     adj[v].push_back(u);

  }
      vector<int> vis(n + 1, -1);  
 bool isBipartite = true;

    for(int i = 1; i <= n; i++){
        if(vis[i] == -1){
          vis[i] = 0; 
            if(dfs( adj,i,vis)==false){
                isBipartite = false;
                break;
            }
        }
    }

    if(isBipartite)
        cout << "Bipartite\n";
    else
        cout << "Not Bipartite\n";

    return 0;
}



