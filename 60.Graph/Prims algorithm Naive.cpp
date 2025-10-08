//NAIVE IMPLEMENTATION o(N2)

#include <bits/stdc++.h>
using namespace std;

void prims(int V, vector<vector<pair<int,int>>> &adj) {
    vector<int> key(V, INT_MAX);   // store minimum edge weight
    vector<int> parent(V, -1);     // store MST parent
    vector<bool> mstSet(V, false); // track included nodes

    key[0] = 0; // start from node 0

    for (int count = 0; count < V - 1; count++) {
        // Pick vertex with min key not in MST
        int u = -1, mn = INT_MAX;
        for (int v = 0; v < V; v++) {
            if (!mstSet[v] && key[v] < mn) {
                mn = key[v];
                u = v;
            }
        }

        mstSet[u] = true; // include in MST

        // Update adjacent vertices
        for (auto [v, wt] : adj[u]) {
            if (!mstSet[v] && wt < key[v]) {
                key[v] = wt;
                parent[v] = u;
            }
        }
    }

    // Print MST
    cout << "Edge   Weight\n";
    for (int i = 1; i < V; i++) {
        cout << parent[i] << " - " << i << "   " << key[i] << "\n";
    }
}

int main() {
    int V = 5;
    vector<vector<pair<int,int>>> adj(V);

    // Example graph (undirected)
    adj[0].push_back({1, 2});
    adj[1].push_back({0, 2});

    adj[0].push_back({3, 6});
    adj[3].push_back({0, 6});

    adj[1].push_back({2, 3});
    adj[2].push_back({1, 3});

    adj[1].push_back({3, 8});
    adj[3].push_back({1, 8});

    adj[1].push_back({4, 5});
    adj[4].push_back({1, 5});

    adj[2].push_back({4, 7});
    adj[4].push_back({2, 7});

    prims(V, adj);
}

