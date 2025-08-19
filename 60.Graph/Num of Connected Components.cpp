#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<vector<int>>& adj, vector<bool>& visited) {
    visited[node] = true;
    for (int neigh : adj[node]) {
        if (!visited[neigh]) dfs(neigh, adj, visited);
    }
}

int countComponents(int n, vector<vector<int>>& edges) {
    vector<vector<int>> adj(n);
    for (auto e : edges) {
        adj[e[0]].push_back(e[1]);
        adj[e[1]].push_back(e[0]); // undirected
    }

    vector<bool> visited(n, false);
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            dfs(i, adj, visited);
            count++;
        }
    }
    return count;
}

int main() {
    int n = 5;
    vector<vector<int>> edges = {{0,1},{1,2},{3,4}};
    cout << "Connected Components: " << countComponents(n, edges) << endl;
}
