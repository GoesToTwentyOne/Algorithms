#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
const int INF = 1e9;

int distance_array[N];
int parent[N];
vector<pair<int, int>> adj_list[N];

int node, edge;
bool negative_cycle = false;

void bellman_ford(int src) {
    for (int i = 1; i <= node; i++) {
        distance_array[i] = INF;
    }
    distance_array[src] = 0;  
    
    for (int i = 1; i <= node; i++) {
        for (int u = 1; u <= node; u++) {
            for (pair<int, int> adj_node : adj_list[u]) {
                int v = adj_node.first;
                int w = adj_node.second;
                if (distance_array[u] != INF && distance_array[u] + w < distance_array[v]) {
                    distance_array[v] = distance_array[u] + w;
                    parent[v] = u;
                    if (i == node) {
                        negative_cycle = true;
                    }
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
    if(negative_cycle){
        cout<<"Negitive cycle Exist"<<'\n';

    }else{
        for (int i = 0; i < path.size(); i++) {
        cout << path[i]<< " ";

    }

    }
    
    cout << endl;
    return 0;
}
