// KRUSKAL'S ALGORITHM

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Disjoint Set (Union by Rank + Path Compression)
class DisjointSet {
    vector<int> parent, rank;

public:
    DisjointSet(int n) {
        parent.resize(n + 1);
        rank.resize(n + 1, 0);
        for (int i = 0; i <= n; i++) {
            parent[i] = i;
        }
    }

    int findUPar(int node) {
        if (node == parent[node])
            return node;
        return parent[node] = findUPar(parent[node]);
    }

    void unionByRank(int u, int v) {
        int pu = findUPar(u);
        int pv = findUPar(v);

        if (pu == pv) return;

        if (rank[pu] < rank[pv])
            parent[pu] = pv;
        else if (rank[pu] > rank[pv])
            parent[pv] = pu;
        else {
            parent[pv] = pu;
            rank[pu]++;
        }
    }
};

// Edge representation
struct Edge {
    int u, v, wt;
};

// Comparator to sort edges by weight
bool compare(Edge a, Edge b) {
    return a.wt < b.wt;
}

int main() {
    int n, m;
    cout << "Enter number of vertices and edges: ";
    cin >> n >> m;

    // ✅ FIX: use vector<Edge>
    vector<Edge> edges;

    for (int i = 0; i < m; i++) {
        int u, v, w;
        cout << "Enter u v weight: ";
        cin >> u >> v >> w;
        edges.push_back({u, v, w});
    }

    // Sort edges by weight
    sort(edges.begin(), edges.end(), compare);

    DisjointSet ds(n);

    int mstWeight = 0;
    vector<Edge> mst;

    for (auto edge : edges) {
        if (ds.findUPar(edge.u) != ds.findUPar(edge.v)) {
            mst.push_back(edge);
            mstWeight += edge.wt;
            ds.unionByRank(edge.u, edge.v);
        }
    }

    cout << "\nEdges in Minimum Spanning Tree:\n";
    for (auto e : mst) {
        cout << e.u << " - " << e.v << " : " << e.wt << endl;
    }

    cout << "\nTotal weight of MST = " << mstWeight << endl;

    return 0;
}
