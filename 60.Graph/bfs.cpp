void bfs(int start, vector<vector<int>>& adj, vector<bool>& visited) {
    queue<int> q;                       // int / Node / char -> depends on data type
    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";        // yha jo b kam krna h, cout/ check / etc...,

        for(int neighbor : adj[node]){   //adjacency list 
            if(!visited[neighbor]){
                q.push(neighbor);
                visited[neighbor] = true;
            }
        }
    }
}
    