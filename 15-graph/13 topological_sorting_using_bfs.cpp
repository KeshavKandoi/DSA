// TOPOLOGICAL SORTING USING BFS

#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int> bfs(vector<vector<int>>&adj,int n){


  vector<int>indegree(n,0);
  for(int i=0;i<n;i++){
    for(auto it:adj[i]){
      indegree[it]++;
    }
  }
  // Step 2: push indegree 0 nodes
  queue<int>q;
  for(int i=0;i<n;i++){
    if(indegree[i]==0){
      q.push(i);
    }
  }

vector<int> topo;
  while(!q.empty()){

    int node=q.front();
    q.pop();
    topo.push_back(node);

    for(auto it:adj[node]){
      indegree[it]--;
      if(indegree[it]==0) {
        q.push(it);
    }
  }
  }


    return topo;

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
 vector<int> ans = bfs(adj, n);

    cout << "Topological Order: ";
    for (auto x : ans) {
        cout << x << " ";
    }

    return 0;
}


