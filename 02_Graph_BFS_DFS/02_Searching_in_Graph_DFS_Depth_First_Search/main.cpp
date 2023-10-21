#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
int visited[N];
vector<int> adj_list[N];

void dfs(int node) {
    cout << node << '\n';
    visited[node] = 1;
    for (int adj_node : adj_list[node]) {
        if (visited[adj_node] == 0) {
            dfs(adj_node);
        }
    }
}
/*
Graph Representation
=======================
Topic:Adjacency List->Linked List/C++ vector
A---------B
        /  \
       C---D
0---------1
        /  \
       2---3
#Total nodes= 4
#Total edge = 4

o--->[1]
1--->[0,2,3]
2--->[1,3]
3--->[1,2]

*/

int main() {
    int node, edge;
    cin >> node >> edge;
    
    for (int i = 0; i < edge; i++) {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v); 
        adj_list[v].push_back(u); 
    }
cout << "Adjacency List:" << '\n';
for (int i = 0; i < node; i++) {
    cout << i << "--> ";
    for (int j = 0; j < adj_list[i].size(); j++) {
        cout << adj_list[i][j] << " ";
    }
    cout << '\n';
}
    int src = 0;
    dfs(src);
}
