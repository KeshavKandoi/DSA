// #include<iostream>
// #include<vector>
// #include<queue>
// using namespace std;

// vector<int> bfsOfGraph(int v , vector<vector<int>> &adj){
//   vector<int>vis(v,0);
//   vis[1]=1;
    
//   queue<int>q;
//   q.push(1);
  
//  vector<int>bfs;

//   while(!q.empty()){
// int node=q.front();
//   q.pop();
//   bfs.push_back(node);

//   for(auto it:adj[node]){
//     if(!vis[it]){
//       vis[it]=1;
//       q.push(it);
//     }
//   }
//   }

// return bfs;

// }

// int main(){
//   int n,m;
//   cout<< " enter the n and m "<<endl;
//   cin>>n>>m;

//   vector<vector<int>>adj(n+1);

//   for(int i=0;i<m;i++){
//     int u,v;
//     cout<< " enter u and v "<<endl;
//     cin>>u>>v;
   

//     adj[u].push_back(v);
//      adj[v].push_back(u);   

//   }
//   vector<int> ans= bfsOfGraph(n+1,adj);


//   for(int i=0;i<ans.size();i++){
//     cout<<ans[i]<< " ";
//   }
//   return 0;
// }



#include<iostream>
#include<vector>
#include<queue>
using namespace std;



vector<int> bfs(vector<vector<int>>&adj,vector<int>&vis,int node){
  vis[node]=1;

  queue<int>q;
  
  q.push(node);
vector<int>ans;

  while(!q.empty()) 
  {
  int curr=q.front();
  q.pop();

  ans.push_back(curr);

  for(auto it:adj[curr]){
    if(vis[it]==0){
           q.push(it);
           vis[it]=1;
}
}
}
    return ans;
}



int main() {
    int n, m;
    cout << "Enter n and m: " << endl;
    cin >> n >> m;

    vector<vector<int>> adj(n + 1);

    for (int i = 0; i < m; i++) {
        int u, v;
        cout << "Enter u and v: " << endl;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> vis(n + 1, 0);

    // BFS for all components
    for (int i = 1; i <= n; i++) {
        if (vis[i] == 0) {
            vector<int> res = bfs(adj, vis, i);

            // print BFS result
            for (int x : res) {
                cout << x << " ";
            }
            cout << endl;
        }
    }

    return 0;
}