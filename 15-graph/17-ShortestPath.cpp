// SHORTEST PATH IN UNDIRECTED PATH

  #include<iostream>
  #include <queue>
  #include<vector>
  #include <climits>

  using namespace std;

  void dijkstra (vector<vector<pair<int,int>>> &adj,int v,vector<int>&dis,vector<int>&parent,int src){

  priority_queue< pair<int,int>,vector<pair<int,int>>,  greater<pair<int,int>> > pq;


for (int i = 1; i <=v; i++) dis[i] = INT_MAX;

for(int i=1;i<=v;i++){
  parent[i]=i;
}

dis[src]=0;
  pq.push({0,src});


  while(!pq.empty()){
    int curdis=pq.top().first;
    int node=pq.top().second;
    pq.pop();
  
  for(auto it :adj[node]){
   int adjnode=it.first;   //node
   int weight = it.second; //dis

   if (curdis + weight < dis[adjnode]) {
                dis[adjnode] = curdis + weight;
                parent[adjnode]=node;
                pq.push({dis[adjnode], adjnode});
            }
        }
    }
  }

  void printPath(int node, vector<int>& parent) {
    if (parent[node] == node) {
        cout << node << " ";
        return;
    }
    printPath(parent[node], parent);
    cout << node << " ";
}



int main() {

    int n, m;
    cout << "Enter number of nodes and edges: ";
    cin >> n >> m;

    vector<vector<pair<int,int>>> adj(n+1);

    // Input edges (u, v, weight)
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cout << "Enter u v weight: ";
        cin >> u >> v >> w;

        adj[u].push_back({v, w});
        adj[v].push_back({u, w});   // remove this if graph is directed
    }

    int src;
    cout << "Enter source node: ";
    cin >> src;

    vector<int> dis(n+1),parent(n+1);

    dijkstra(adj, n, dis,parent, src);

    // Print shortest distances
    cout << "\nShortest distances from source:\n";
    for (int i = 1; i <= n; i++) {
        cout << "Node " << i << " -> Distance = " << dis[i] << endl;
    }

        cout << "\nShortest paths from source:\n";
   for (int i = 1; i <= n; i++) {
    cout << "Path to " << i << ": ";

    if (dis[i] == INT_MAX) {
        cout << "No path";   // unreachable node
    } else {
        printPath(i, parent);
    }
 
    cout << endl;
}

    return 0;
}

 