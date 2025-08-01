#include <iostream>
#include <unordered_map>
#include <list>
#include <stack>
using namespace std;

void topoSortDFS(int node, unordered_map<int, bool> &visited, stack<int> &st, unordered_map<int, list<int>> &adjList) {
    visited[node] = true;

    for (int neighbor : adjList[node]) {
        if (!visited[neighbor]) {
            topoSortDFS(neighbor, visited, st, adjList);
        }
    }

    // All children processed, push to stack
    st.push(node);
}

int main() {
    unordered_map<int, list<int>> adjList;
    unordered_map<int, bool> visited;
    stack<int> st;

    int n, m;
    cin >> n >> m;  // n = number of nodes, m = number of directed edges

    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);  // directed edge
    }

    // Perform DFS on all components
    for (int i = 0; i < n; ++i) {
        if (!visited[i]) {
            topoSortDFS(i, visited, st, adjList);
        }
    }

    cout << "Topological Sort Order:\n";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    return 0;
}
