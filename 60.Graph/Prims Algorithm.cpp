//min heap optimized O(E log V)

#include <bits/stdc++.h>
using namespace std;

void primMST(int V, vector<vector<pair<int,int>>>& adj) {
    vector<int> key(V, INT_MAX);      // Minimum edge weight to connect node
    vector<int> parent(V, -1);        // To store MST structure
    vector<bool> mst(V, false);       // True if vertex is included in MST

    // Min-heap {key, vertex}
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;

    key[0] = 0;   // Start from node 0
    pq.push({0, 0});

    while(!pq.empty()){
        int u = pq.top().second;
        pq.pop();

        if(mst[u]) continue;   // already included
        mst[u] = true;

        // Explore neighbors
        for(auto [v, wt] : adj[u]){
            if(!mst[v] && wt < key[v]){
                key[v] = wt;
                parent[v] = u;
                pq.push({key[v], v});
            }
        }
    }

    // Print MST edges
    cout << "Edges in MST:\n";
    for(int i = 1; i < V; i++){
        cout << parent[i] << " - " << i << "  (weight: " << key[i] << ")\n";
    }
}


int main(){
    int V = 5; // Number of vertices
    vector<vector<pair<int,int>>> adj(V);

    // Example graph
    auto addEdge = [&](int u, int v, int w){
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    };

    addEdge(0, 1, 2);
    addEdge(0, 3, 6);
    addEdge(1, 2, 3);
    addEdge(1, 3, 8);
    addEdge(1, 4, 5);
    addEdge(2, 4, 7);
    addEdge(3, 4, 9);

    primMST(V, adj);
    return 0;
}
