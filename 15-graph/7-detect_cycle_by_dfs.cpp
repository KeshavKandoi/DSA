#include <iostream>
#include <vector>
using namespace std;

bool cycle(vector<vector<int>>& adj, int node, int parent, vector<int>& vis) {

    vis[node] = 1;

    for (auto it : adj[node]) {

        // Case 1: neighbor not visited
        if (!vis[it]) {
            if (cycle(adj, it, node, vis))
                return true;
        }

        // Case 2: neighbor visited and not parent
        else if (it != parent) {
            return true;
        }
    }

    // No cycle found from this node
    return false;
}

int main() {
    int n, m;
    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter number of edges: ";
    cin >> m;

    vector<vector<int>> adj(n + 1);

    for (int i = 0; i < m; i++) {
        int u, v;
        cout << "Enter u and v: ";
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> vis(n + 1, 0);
    bool ans = false;

    // Check all components
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            if (cycle(adj, i, -1, vis)) {
                ans = true;
                break;
            }
        }
    }

    if (ans)
        cout << "Cycle exists\n";
    else
        cout << "No cycle\n";

    return 0;
}
