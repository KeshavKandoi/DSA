#include<iostream>
using namespace std;
#include<vector>
#include <queue>


bool cyclic(vector<vector<int>>&adj,int src)
{
  vector<int>vis(adj.size(),0);
  vis[src]=1;
  queue<pair<int,int>> q;
  q.push({src, -1});


  while(!q.empty()){
    int node=q.front().first;
    int parent=q.front().second;
    q.pop();

    for(auto it:adj[node]){
      if(!vis[it]){
        vis[it]=1;
        q.push({it,node});
      }
      else if(parent!=it){
        return true;
      }
    }

  }
  return false;
}



int main(){
  int n,m;
  cout << "Enter the value of n-node"<<endl;
  cout<< " Enter the value of m-edge"<<endl;
  cin>>n>>m;
  vector<vector<int>>adj(n+1);

  for(int i=0;i<m;i++){
  int u,v;
  cout<<"Enter the value of u and v "<<endl;
  cin>>u>>v;
  adj[u].push_back(v);
  adj[v].push_back(u);
  }
   // -------- COMPONENT ADDITION ONLY --------
  bool ans = false;
  for(int i = 1; i <= n; i++){
      if(cyclic(adj, i)){
          ans = true;
          break;
      }
  }
  

    if (ans==true){
        cout << "Cycle exists\n";
    }
    else{
        cout << "No cycle\n";
    }
    return 0;
}



