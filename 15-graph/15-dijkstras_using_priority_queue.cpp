// dijkstra's algorithm using priority queue

  #include<iostream>
  #include <queue>
  #include<vector>
  using namespace std;

  void dijkstra (vector<vector<pair<int,int>>> &adj,int v,vector<int>&dis,int src){

  priority_queue< pair<int,int>,vector<pair<int,int>>,  greater<pair<int,int>> > pq;


for (int i = 0; i < v; i++) dis[i] = INT_MAX;
  dis[src]=0;
  pq.push({0,src});

  while(!pq.empty()){
    int curdis=pq.top().first;
    int node=pq.top().second;
    pq.pop();
  
  for(auto it :adj[node]){
   int adjnode=it.first;
   int weight = it.second;

   if (curdis + weight < dis[adjnode]) {
                dis[adjnode] = curdis + weight;
                pq.push({dis[adjnode], adjnode});
            }
        }
    }
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

    int src;
    cout << "Enter source node: ";
    cin >> src;

    vector<int> dis(n);

    dijkstra(adj, n, dis, src);

    // Print shortest distances
    cout << "\nShortest distances from source:\n";
    for (int i = 0; i < n; i++) {
        cout << "Node " << i << " -> Distance = " << dis[i] << endl;
    }

    return 0;
}