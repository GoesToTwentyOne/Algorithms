#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
const long long INF = 1e18;

long long distance_array[N];
int parent[N];
vector<pair<int, int>> adj_list[N];

int node, edge;
bool negative_cycle = false;
int last_updated_node = -1;

void bellman_ford() {
    for (int i = 1; i <= node; i++) {
        distance_array[i] = INF;
    }
  

    for (int i = 1; i <= node - 1; i++) {
        for (int u = 1; u <= node; u++) {
            for (auto adj_node : adj_list[u]) {
                int v = adj_node.first;
                int w = adj_node.second;
                if ( distance_array[u] + w < distance_array[v]) {
                    distance_array[v] = distance_array[u] + w;
                    parent[v] = u;
                }
            }
        }
    }

    for (int u = 1; u <= node; u++) {
        for (auto adj_node : adj_list[u]) {
            int v = adj_node.first;
            int w = adj_node.second;
            if (distance_array[u] + w < distance_array[v]) {
                negative_cycle = true;
                last_updated_node = v;
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

    bellman_ford();

    if (negative_cycle) {
        cout << "YES" << '\n';
        vector<int> cycle;
        int selected_node = last_updated_node;
        for (int i = 1; i <= node - 1; i++) {
            selected_node = parent[selected_node];
        }

        int first_node = selected_node;
        cycle.push_back(selected_node);
        while (true) {
            selected_node = parent[selected_node];
            cycle.push_back(selected_node);
            if (selected_node == first_node) {
                break;
            }
        }

        reverse(cycle.begin(), cycle.end());
        for (int i = 0; i < cycle.size(); i++) {
            cout << cycle[i] << " ";
        }
    } else {
        cout << "NO" << '\n';
    }

    return 0;
}
