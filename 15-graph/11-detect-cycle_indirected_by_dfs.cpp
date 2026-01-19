// DETECT CYCLE IN DIRECETED GRAPH USING DFS

#include<iostream>
#include<vector>
using namespace std;

bool dfs(vector<vector<int>>&adj,int node,vector<int>&vis,vector<int>&pathVis){
  vis[node]=1;
  pathVis[node]=1;

  for(auto it:adj[node]){
    if(vis[it]==0){

    if(dfs(adj,it,vis,pathVis)==true) return true;
    }
       else if(pathVis[it] == 1){
            return true; // cycle detected
    }

  }
  pathVis[node]=0;
  return false;
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
      vector<int> vis(n + 1, 0);  
      vector<int> pathVis(n + 1, 0);  
 bool cycle = false;

    for(int i = 1; i <= n; i++){
        if(vis[i] == 0){
            if(dfs( adj,i,vis,pathVis)==false){
                cycle = true;
                break;
            }
        }
    }

    if(cycle)
        cout << "Cyclic";
    else
        cout << "Not Cyclic";

    return 0;
}



