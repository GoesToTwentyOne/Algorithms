#include<bits/stdc++.h>
using namespace std;

int const N = 2e5;
vector<int> adj_list[N];
int visited[N];
int level[N];
int parent[N];

void bfs(int src) {
    visited[src] = 1;
    level[src] = 1;
    queue<int> q;
    q.push(src);

    while (!q.empty()) {
        int head = q.front();
        q.pop();

        for (int adj_node : adj_list[head]) {
            if (visited[adj_node] == 0) {
                visited[adj_node] = 1;
                level[adj_node] = level[head] + 1;
                parent[adj_node] = head; // Store the parent of adj_node
                q.push(adj_node);
            }
        }
    }
}

int main() {
    int node, edge;
    cin >> node >> edge;
    for (int i = 0; i < edge; i++) {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    int src = 1;
    bfs(src);

    int dest_node = node;
    if (visited[dest_node] == 0) {
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }

    cout << level[dest_node] << endl;
    
    int select_node = dest_node;
    vector<int> path;
    while (true) {
        path.push_back(select_node);
        if (select_node == src) {
            break;
        }
        select_node = parent[select_node]; 
    }
    reverse(path.begin(), path.end());
    
    for (int i = 0; i < path.size(); i++) {
        cout << path[i] << " ";
    }
    return 0;
}
