#include<bits/stdc++.h>
using namespace std;
int const N=1e5;
int visited[N];
vector<int> adj_list[N];
void bfs(int src){
    queue<int> q;
    visited[src] =1;
    q.push(src);
    while(!q.empty()){
        int head=q.front();
        q.pop();
        cout<<head<<'\n';
        for(int adj_node : adj_list[head]){
            if(visited[adj_node]==0){
                visited[adj_node]=1;
                q.push(adj_node);
            }


        }
    }

}
int main(){
    int node,edge;
    cin>>node>>edge;
    for(int i=0;i<node;i++){
        int u,v;
        cin>>u>>v;
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
    int src=0;
    bfs(src);
    
}
