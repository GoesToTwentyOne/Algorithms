#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 1; // Increase the size by 1
const int INF = 1e9;

int visited[N];
int distance_array[N];
int node, edge;
vector<pair<int, int>> adj_list[N];

void dijkstra(int src) { // Corrected the function name
    for (int i = 1; i <= node; i++) {
        distance_array[i] = INF;
    }
    distance_array[src] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, src});
    while (!pq.empty()) {
        int head_distance, head;
        tie(head_distance, head) = pq.top();
        pq.pop();
        if (visited[head] == 1) continue;
        visited[head] = 1;
        for (pair<int, int> adj_entry : adj_list[head]) {
            int adj_node = adj_entry.first;
            int edge_cost = adj_entry.second;
            if (distance_array[head] + edge_cost < distance_array[adj_node]) {
                distance_array[adj_node] = distance_array[head] + edge_cost;
                pq.push({distance_array[adj_node], adj_node});
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
        adj_list[v].push_back({u, w});
    }
    int src = 1;
    dijkstra(src);
    for (int i = 1; i <= node; i++) {
        cout << distance_array[i] << " ";
    }
    cout << '\n';
}
