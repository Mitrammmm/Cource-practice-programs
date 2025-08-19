#include <bits/stdc++.h>
using namespace std;

// Function for topological sort (DFS based)
void topoSort(int node, vector<pair<int,int>> adj[], vector<int>& vis, stack<int>& st) {
    vis[node] = 1;
    for (auto it : adj[node]) {
        int v = it.first;
        if (!vis[v]) {
            topoSort(v, adj, vis, st);
        }
    }
    st.push(node);
}

void shortestPathDAG(int n, int src, vector<pair<int,int>> adj[]) {
    // Step 1: Topological Sort
    vector<int> vis(n, 0);
    stack<int> st;
    for (int i = 0; i < n; i++) {
        if (!vis[i]) topoSort(i, adj, vis, st);
    }

    // Step 2: Initialize distance array
    vector<int> dist(n, 1e9);
    dist[src] = 0;

    // Step 3: Relax edges in topological order
    while (!st.empty()) {
        int u = st.top();
        st.pop();

        if (dist[u] != 1e9) {  // if node is reachable
            for (auto it : adj[u]) {
                int v = it.first;
                int wt = it.second;

                if (dist[u] + wt < dist[v]) {
                    dist[v] = dist[u] + wt;
                }
            }
        }
    }

    // Step 4: Print shortest distances
    cout << "Shortest distances from source " << src << ":\n";
    for (int i = 0; i < n; i++) {
        if (dist[i] == 1e9) cout << "INF ";
        else cout << dist[i] << " ";
    }
    cout << endl;
}

int main() {
    int n, m;
    cout << "Enter number of nodes and edges: ";
    cin >> n >> m;

    vector<pair<int,int>> adj[n];

    cout << "Enter edges (u v wt):\n";
    for (int i = 0; i < m; i++) {
        int u, v, wt;
        cin >> u >> v >> wt;
        adj[u].push_back({v, wt});  // directed edge
    }

    int src;
    cout << "Enter source node: ";
    cin >> src;

    shortestPathDAG(n, src, adj);

    return 0;
}
