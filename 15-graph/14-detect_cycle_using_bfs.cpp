// DETECT CYCLE USING BFS 

// TOPOLOGICAL SORTING USING BFS

#include<iostream>
#include<vector>
#include<queue>
using namespace std;

bool  bfs(vector<vector<int>>&adj,int n){


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

int cnt=0;
  while(!q.empty()){

    int node=q.front();
    q.pop();
    cnt++;

    for(auto it:adj[node]){
      indegree[it]--;
      if(indegree[it]==0) {
        q.push(it);
    }
  }
  }

    // Step 4: check cycle
    if (cnt == n){
        return false; 
        }  
    else{
        return true;    
    }
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
  
}
 bool cyclic=bfs(adj, n);

if(cyclic==true){
  cout<< " Cyclic"<<endl;
}
else{
  cout<<"NOt Cyclic"<<endl;
}
return 0; 
}


