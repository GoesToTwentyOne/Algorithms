# include<bits/stdc++.h>
using namespace std;
int const N=1e5;
int visited[N];
int level[N];
vector<int> adj_list[N];
void bfs(int src){
    queue<int> q;
    visited[src] =1;
    level[src] = 0;
    q.push(src);
    while(!q.empty()){
        int head=q.front();
        q.pop();
        for(int adj_node : adj_list[head]){
            if(visited[adj_node]==0){
                visited[adj_node]=1;
                level[adj_node] = level[head]+1;
                q.push(adj_node);
            }

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
int main(){
    int node,edge;
    cin>>node>>edge;
    for(int i=0;i<edge;i++){
        int u,v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    cout<<"Adjacency List:"<<'\n';
    for(int i=0;i<node;i++){
        cout<<i<<"-->";
        for(int j=0;j<adj_list[i].size();j++){
            cout<<adj_list[i][j]<<" ";
        }
        cout<<'\n';
        
    }
    int src=0;
    bfs(src);
    for(int i=0;i<node;i++){
        cout<<"node -- >" <<i<<" --- level: "<<level[i]<<'\n';
    }

}
