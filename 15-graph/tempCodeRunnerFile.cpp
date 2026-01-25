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