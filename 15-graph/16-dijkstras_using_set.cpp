#include<iostream>
#include<vector>
#include <set>
#include <climits>

using namespace std;

void dijkstras(vector<vector<pair<int,int>>>&adj,int v,int src,vector<int>&dist){

  set<pair<int,int>>st;

   for(int i=0;i<v;i++){
    dist[i]=INT_MAX;
   }
   dist[src]=0;
   st.insert({0,src});

   while(!st.empty()){
    auto it =st.begin();
    int curdist=it->first;
    int node=it->second;
     st.erase(it);
       

       for(auto kk:adj[node]){
        int adjnode=kk.first;
        int newdist=kk.second;

           if(curdist+newdist<dist[adjnode]){
              if(dist[adjnode]!=INT_MAX){
                st.erase({dist[adjnode],adjnode});
              }
             dist[adjnode]=curdist+newdist;
             st.insert({dist[adjnode],adjnode});

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

    dijkstras(adj,n,src,dis);

    // Print shortest distances
    cout << "\nShortest distances from source:\n";
    for (int i = 0; i < n; i++) {
        cout << "Node " << i << " -> Distance = " << dis[i] << endl;
    }

    return 0;
}