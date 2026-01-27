// PRIMS ALGORITHM

#include<iostream>
#include<queue>
#include<vector>
#include <functional>

using namespace std;



vector<pair<int,int>> prims(vector<vector<pair<int,int>>>& adj, int v){


  priority_queue< pair<int, pair<int,int>>,vector<pair<int, pair<int,int>>>,greater<pair<int, pair<int,int>>> > pq;


// priority_queue< tuple<int,int,int>,vector<tuple<int,int,int>>,greater<tuple<int,int,int>> > pq;
 vector<int> vis(v, 0);
vector<pair<int,int>>mst;

 pq.push({0,{0,-1}});
 int sum=0;

 while(!pq.empty()){
  auto it=pq.top();
  int node=it.second.first;
  int wt=it.first;
  int parent=it.second.second;
  pq.pop();

  if(vis[node]==1) continue;
  vis[node]=1;
  sum+=wt;

        if (parent != -1) {
            mst.push_back({parent, node});
        }
  
  
  for (auto edge : adj[node]) {
            int adjnode = edge.first;
            int weight = edge.second;

            if (!vis[adjnode]) {
                pq.push({weight, {adjnode, node}});
            }
        }
    }
     cout << "Total weight of MST = " << sum << endl;
    return mst;
}


int main() {

    int n, m;
    cout << "Enter number of nodes and edges: ";
    cin >> n >> m;

    vector<vector<pair<int,int>>> adj(n);

    // Input edges (u, v, weight)
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cout << "Enter u v weight: ";
        cin >> u >> v >> w;

        adj[u].push_back({v, w});
        adj[v].push_back({u, w});   // remove this if graph is directed
    }
    vector<pair<int,int>> mst = prims( adj,n);

    cout << "\nEdges in Minimum Spanning Tree:\n";
    for (auto e : mst) {
        cout << e.first << " - " << e.second << endl;
    }

    return 0;
}