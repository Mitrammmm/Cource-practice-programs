#include <bits/stdc++.h>
using namespace std;

// typedef pair<int, int> pii; // {distance, node}

void dijkstra(int start, int V, vector<vector<pair<int,int>>>& adj) {
    vector<int> dist(V, INT_MAX);   // distance array
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

    dist[start] = 0;
    pq.push({0, start});  // {dis,node}

    while (!pq.empty()) {
        int d = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        if (d > dist[u]) continue; // skip if outdated

        for (auto edge : adj[u]) {
            int v = edge.first;
            int w = edge.second;

            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }

    // Print shortest distances
    cout << "Shortest distances from node " << start << ":\n";
    for (int i = 0; i < V; i++) {
        if (dist[i] == INT_MAX) cout << i << " : INF\n";
        else cout << i << " : " << dist[i] << "\n";
    }
}

int main() {
    int V = 5; // number of vertices
    vector<vector<pair<int,int>>> adj(V);

    // Example graph (undirected, weighted)
    adj[0].push_back({1, 2});
    adj[1].push_back({0, 2});

    adj[0].push_back({2, 4});
    adj[2].push_back({0, 4});

    adj[1].push_back({2, 1});
    adj[2].push_back({1, 1});

    adj[1].push_back({3, 7});
    adj[3].push_back({1, 7});

    adj[2].push_back({4, 3});
    adj[4].push_back({2, 3});

    int start = 0;
    dijkstra(start, V, adj);

    return 0;
}
