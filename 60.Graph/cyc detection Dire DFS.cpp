#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;

bool isCyclicDFS(int node, unordered_map<int, bool> &visited, unordered_map<int, bool> &dfsVisited, unordered_map<int, list<int>> &adjList) {
    visited[node] = true;
    dfsVisited[node] = true;

    for (int neighbor : adjList[node]) {
        if (!visited[neighbor]) {
            if (isCyclicDFS(neighbor, visited, dfsVisited, adjList))
                return true;
        } else if (dfsVisited[neighbor]) {
            // Node already in current recursion stack → cycle found
            return true;
        }
    }

    dfsVisited[node] = false; // Backtrack
    return false;
}

int main() {
    unordered_map<int, list<int>> adjList;
    unordered_map<int, bool> visited;
    unordered_map<int, bool> dfsVisited;
    int n, m;
    cin >> n >> m;

    // Input directed edges
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v); // directed graph
    }

    // Check all components
    bool cycle = false;
    for (int i = 0; i < n; ++i) {
        if (!visited[i]) {
            if (isCyclicDFS(i, visited, dfsVisited, adjList)) {
                cycle = true;
                break;
            }
        }
    }

    if (cycle)
        cout << "Graph contains a cycle\n";
    else
        cout << "Graph does not contain a cycle\n";

    return 0;
}
