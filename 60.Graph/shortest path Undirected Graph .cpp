//USING BFS
#include <bits/stdc++.h>
using namespace std;

void bfsShortestPath(int src, int dest, vector<vector<int>>& adj, int n) {

    vector<int> parent(n, -1);   // parent array to reconstruct path
    vector<bool> visited(n, false); // visited array
    queue<int> q;

    visited[src] = true;
    q.push(src);

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        // stop BFS if destination found
        if (node == dest) break;

        for (int neigh : adj[node]) {
            if (!visited[neigh]) {
                visited[neigh] = true;
                parent[neigh] = node; // store parent
                q.push(neigh);
            }
        }
    }

    // reconstruct path from dest to src using parent[]
    if (!visited[dest]) {
        cout << "No path exists\n";
        return;
    }

    vector<int> path;
    for (int v = dest; v != -1; v = parent[v]) {        // v = parent[v] {parent to parent jaege}
        path.push_back(v);
    }
    reverse(path.begin(), path.end());

    cout << "Shortest Path: ";
    for (int v : path) cout << v << " ";
    cout << endl;
}

int main() {
    int n, m;
    cout << "Enter number of nodes and edges: ";
    cin >> n >> m;

    vector<vector<int>> adj(n);

    cout << "Enter edges (u v):\n";
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); // undirected
    }

    int src, dest;
    cout << "Enter source and destination: ";
    cin >> src >> dest;

    bfsShortestPath(src, dest, adj, n);

    return 0;
}
