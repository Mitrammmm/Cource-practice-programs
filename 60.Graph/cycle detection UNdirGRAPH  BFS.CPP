#include <iostream>
#include <unordered_map>
#include <list>
#include <queue>
using namespace std;

bool isCyclicBFS(int node, unordered_map<int, bool> &visited, unordered_map<int, list<int>> &adjList) {
    unordered_map<int,int> parent;
    parent[node] = -1;
    visited[node] = true;
    queue<int> q;
    q.push(node);

    while (!q.empty()) {
        int front = q.front();
        q.pop();

        for (int neighbor : adjList[front]) {
            if(visited[neighbor] == true && neighbor != parent[front]) return true;
            else if(visited[neighbor] != true){
                visited[neighbor] = true;
                q.push(neighbor);
                parent[neighbor] = front;
            }
        }
    }

    return false;
}

int main() {
    unordered_map<int, list<int>> adjList;
    unordered_map<int, bool> visited;
    int n, m;
    cin >> n >> m; // n = number of nodes, m = number of edges

    // Input edges
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u); // undirected graph
    }

    // Check for cycles in all components
    bool cycleFound = false;
    for (int i = 0; i < n; ++i) {
        if (!visited[i]) {
            if (isCyclicBFS(i, visited, adjList)) {
                cycleFound = true;
                break;
            }
        }
    }

    if (cycleFound)
        cout << "Graph contains a cycle\n";
    else
        cout << "Graph does not contain a cycle\n";

    return 0;
}
