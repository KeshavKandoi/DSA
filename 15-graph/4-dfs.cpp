#include<iostream>
#include<vector>
using namespace std;

void dfs( vector<vector<int>>&adj,int node,vector<int>&vis,vector<int>&ls){

  vis[node]=1;
  ls.push_back(node);

  for(auto it: adj[node]){
    if(!vis[it]){
      dfs(adj,it,vis,ls);
    }
  }

}
int main(){
  int n,m;
  cout << " enter n and m " <<endl;
  cin>>n>>m;

  vector<vector<int>> adj(n);  

  for(int i=0;i<m;i++){
    int u,v;
    cout<< " enter u and v "<<endl;
    cin>>u>>v;

if(u<0 || v<0 || v>=n || u>= n){
  
  cout << "Invalid edge index\n";
            return 1;
}
    adj[u].push_back(v);
      adj[v].push_back(u);
  }
  vector<int>vis(n,0);
  vector<int>result;
dfs(adj,0,vis,result);
  

  for(int i=0;i<result.size();i++){
    cout<<result[i]<< " ";
  }
  return 0;
}
