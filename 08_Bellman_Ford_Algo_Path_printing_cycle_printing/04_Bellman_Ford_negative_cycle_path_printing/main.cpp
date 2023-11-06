#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
const int INF = 1e9;

int distance_array[N];
int parent[N];
vector<pair<int, int>> adj_list[N];

int node, edge;
bool negative_cycle = false;
int last_updated_node = -1;

void bellman_ford(int src) {
    for (int i = 1; i <= node; i++) {
        distance_array[i] = INF;
    }
    distance_array[src] = 0;  
    
    for (int i = 1; i <= node - 1; i++) {
        for (int u = 1; u <= node; u++) {
            for (pair<int, int> adj_node : adj_list[u]) {
                int v = adj_node.first;
                int w = adj_node.second;
                if (distance_array[u] != INF && distance_array[u] + w < distance_array[v]) {
                    distance_array[v] = distance_array[u] + w;
                    parent[v] = u;
                }
            }
        }
    }


    for (int u = 1; u <= node; u++) {
        for (pair<int, int> adj_node : adj_list[u]) {
            int v = adj_node.first;
            int w = adj_node.second;
            if (distance_array[u] != INF && distance_array[u] + w < distance_array[v]) {
                negative_cycle = true;
                last_updated_node = v;
                return; 
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

    if (negative_cycle) {
        cout << "Negative cycle exists" << '\n';
        vector<int> cycle;
        int selected_node = last_updated_node;
        vector<bool> visited(node + 1, false);

        while (!visited[selected_node]) {
            cycle.push_back(selected_node);
            visited[selected_node] = true;
            selected_node = parent[selected_node];
        }

        reverse(cycle.begin(), cycle.end());
        for (int i = 0; i < cycle.size(); i++) {
            cout << cycle[i] << " ";
        }
    } else {
        vector<int> path;
        int destination = node;
        int selected_node = destination;

        while (true) {
            path.push_back(selected_node);
            if (src == selected_node) {
                break;
            }
            selected_node = parent[selected_node];
        }

        reverse(path.begin(), path.end());
        for (int i = 0; i < path.size(); i++) {
            cout << path[i] << " ";
        }
    }

    cout << endl;
    return 0;
}
