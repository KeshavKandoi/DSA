// BELLMAN-FORD ALGORITHM (Shortest Path)

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void bellmanFord(vector<vector<int>>& edges, vector<int>& dis, int src, int n) {

    // Step 1: Initialize distances
    for (int i = 0; i < n; i++) {
        dis[i] = INT_MAX;
    }
    dis[src] = 0;

    // Step 2: Relax all edges (n-1) times
    for (int i = 1; i <= n - 1; i++) {
        for (auto it : edges) {
            int u = it[0];
            int v = it[1];
            int w = it[2];

            if (dis[u] != INT_MAX && dis[u] + w < dis[v]) {
                dis[v] = dis[u] + w;
            }
        }
    }

    // Step 3: Check for negative weight cycle
    for (auto it : edges) {
        int u = it[0];
        int v = it[1];
        int w = it[2];

        if (dis[u] != INT_MAX && dis[u] + w < dis[v]) {
            cout << "Graph contains a negative weight cycle\n";
            return;
        }
    }
}

int main() {

    int n, m;
    cout << "Enter number of nodes and edges: ";
    cin >> n >> m;

    // Edge list: each edge = {u, v, w}
    vector<vector<int>> edges;

    for (int i = 0; i < m; i++) {
        int u, v, w;
        cout << "Enter u v weight: ";
        cin >> u >> v >> w;

        edges.push_back({u, v, w});   // directed edge
    }

    int src;
    cout << "Enter source node: ";
    cin >> src;

    vector<int> dis(n);

    bellmanFord(edges, dis, src, n);

    // Print shortest distances
    cout << "\nShortest distances from source:\n";
    for (int i = 0; i < n; i++) {
        if (dis[i] == INT_MAX)
            cout << "Node " << i << " -> Distance = INF" << endl;
        else
            cout << "Node " << i << " -> Distance = " << dis[i] << endl;
    }

    return 0;
}
