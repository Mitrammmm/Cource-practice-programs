#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;

bool isCyclicDFS(int node, int parent, unordered_map<int, bool> &visited, unordered_map<int, list<int>> &adjList) {
    visited[node] = true;

    for (int neighbor : adjList[node]) {
        if (!visited[neighbor]) {        //nbr visited mhi h ->condition true h
            if (isCyclicDFS(neighbor, node, visited, adjList)) {
                return true;
            }
        } 
        else if (neighbor != parent) {
            return true; // visited neighbor not equal to parent means cycle
        }
    }

    return false;
}

int main() {
    unordered_map<int, list<int>> adjList;
    unordered_map<int, bool> visited;
    int n, m;
    cin >> n >> m;

    // input edges
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    // check each component
    bool cycle = false;
    for (int i = 0; i < n; ++i) {
        if (!visited[i]) {
            if (isCyclicDFS(i, -1, visited, adjList)) {
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
