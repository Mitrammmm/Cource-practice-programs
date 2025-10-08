#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void dfs(int node,vector<vector<int>>& adj , vector<int>& visited){
        visited[node] = true;
        for(int neigh : adj[node]){
            if(!visited[neigh]) dfs(neigh,adj,visited);
        }
    }

    int countComponents(int n, vector<vector<int>>& edges){            //O(v+e) final TC
        vector<vector<int>> adj(n);
        for(auto e :edges){
            adj[e[0]].push_back(adj[e[1]]);
            adj[e[1]].push_back(adj[e[0]]);
        }

        vector<int> visited(n,false);
        int count = 0;

        for(int i=0;i<n;i++){
            if(visited[i] == false){
                dfs(i,adj,visited);
                count++;
            }
        }

        return count;
    }

};

int main() {
    Solution sol;
    int n = 5;
    vector<vector<int>> edges = {{0,1},{1,2},{3,4}};
    cout << sol.countComponents(n, edges) << endl; // Output: 2
    return 0;
}
