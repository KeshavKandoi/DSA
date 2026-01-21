// TOPOLOGICAL ORDERING USING DFS


#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void dfs(vector<vector<int>>&adj,int node,vector<int>&vis,stack<int>&st){

vis[node]=1;

for(auto it :adj[node]){
  if(vis[it]==0){
    dfs(adj,it,vis,st);

  }
}
st.push(node);


}
  int main(){
  int n,m;
  cout<< "Enter the n--node and m--edge"<<endl;
  cin>>n>>m;
  vector<vector<int>>adj(n);
  
  for(int i=0;i<m;i++){
    int u,v;
  cout<<"enter u and v"<<endl;
  cin>>u>>v;

    adj[u].push_back(v);
  
}
vector<int> vis(n,0);
stack<int>st;


    // run dfs from every node
    for (int i = 0; i < n; i++) {
        if (vis[i]==0) {
            dfs( adj,i, vis, st);
        }
    }

 cout << "Topological Order: ";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}