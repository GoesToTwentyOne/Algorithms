#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
int dist[N]; 
const int INF = 1e5;  
vector<pair<int, int>> adj_list[N];
int node, edge;
void bellman_ford(int src) {
    for (int i = 1; i <= node; i++) {
        dist[i] = INF;
    }
    dist[src] = 0;
    for (int i = 1; i <= node - 1; i++) {
        for (int u = 1; u <= node; u++) {
            for (pair<int, int> adj_node : adj_list[u]) {
                int v = adj_node.first;
                int weight = adj_node.second;
                if (dist[u] + weight < dist[v]) {
                    dist[v] = dist[u] + weight;
                }
            }
        }
    }
}
int main() {
    cin >> node >> edge;
    for (int i = 0; i < edge; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj_list[u].push_back({v, w});
    }
    int src = 1;
    bellman_ford(src);
    for (int i = 1; i <= node; i++) {
        cout << dist[i] << " ";
    }
    cout << endl;
}
