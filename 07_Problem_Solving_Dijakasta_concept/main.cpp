#include <bits/stdc++.h>
using namespace std;

const long long N = 1e5 + 1;
const long long INF = 1e18;
long long visited[N];
long long parent[N];
long long distance_array[N];
long long node, edge;
vector<pair<long long, long long>> adj_list[N];

void dijkstra(long long src) {
    for (long long i = 1; i <= node; i++) {
        distance_array[i] = INF;
    }
    distance_array[src] = 0;
    priority_queue<pair<long long, long long>, vector<pair<long long, long long>>, greater<pair<long long, long long>>> pq;
    pq.push({0, src});
    while (!pq.empty()) {
        long long head_distance;
        long long head;
        tie(head_distance, head) = pq.top();
        pq.pop();
        if (visited[head] == 1) continue;
        visited[head] = 1;
        for (pair<long long, long long> adj_entry : adj_list[head]) {
            long long adj_node = adj_entry.first;
            long long edge_cost = adj_entry.second;
            if (distance_array[head] + edge_cost < distance_array[adj_node]) {
                distance_array[adj_node] = distance_array[head] + edge_cost;
                parent[adj_node] = head;
                pq.push({distance_array[adj_node], adj_node});
            }
        }
    }
}

int main() {
    cin >> node >> edge;
    for (long long i = 0; i < edge; i++) {
        long long u, v, w;
        cin >> u >> v >> w;
        adj_list[u].push_back({v, w});
        adj_list[v].push_back({u, w});
    }
    long long src = 1;
    dijkstra(src);
    long long dest_node = node;
    vector<long long> path;
    if (visited[dest_node] == 0) {
        cout << -1 << endl;
        return 0;
    }
    while (true) {
        path.push_back(dest_node);
        if (parent[dest_node] == 0) break;
        dest_node = parent[dest_node];
    }
    reverse(path.begin(), path.end());
     for (long long node : path) {
        cout << node << " ";
    }
    cout << endl; 
}

