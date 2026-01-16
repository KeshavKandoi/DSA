#include<iostream>
#include<vector>
using namespace std;

void dfs(vector<vector<int>>&adj,int node,vector<int>&vis,vector<int>&ls){
  vis[node]=1;

  ls.push_back(node);

  for(auto it:adj[node]){
    if(!vis[it]){
      dfs(adj,it,vis,ls);
    }
  }
}

int provines(vector<vector<int>>&adj,int n){
  vector<int>vis(n+1,0);
  int cnt=0;

  for(int i=1;i<=n;i++){
    if(!vis[i]){
      cnt++;
        vector<int> ls;     
      dfs(adj,i,vis,ls);
        cout << "Province " << cnt << ": ";
            for (int x : ls) cout << x << " ";
            cout << endl;
    }
  }
  return cnt;
}
int main(){
  int n,m;
  cout<< "Enter the n and m "<<endl;
  cin>>n>>m;

vector<vector<int>> adj(n+1);

for(int i=0;i<m;i++){
  int u,v;
  cout<< " enter u and v "<<endl;
  cin>>u>>v;
  adj[u].push_back(v);
   adj[v].push_back(u);
}
cout<< provines(adj,n)<<endl;
}
