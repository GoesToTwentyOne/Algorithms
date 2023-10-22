#include<bits/stdc++.h>
using namespace std;
int const N = 1e5;
vector<int> adj_list[N];
int visited[N];
int color[N];
int node,endge;
bool dfs(int src) {
    visited[src] = 1;
    for (int adj_node : adj_list[src]) {
        if (visited[adj_node] == 0) {
            if(color[src]== 1){
                color[adj_node] = 2;
            }else{
                color[adj_node] = 1;
            }
            bool is_bicolorable= dfs(adj_node);
            if(! is_bicolorable){
                return false;
            }
        }else{
            if (color[src] ==  color[adj_node]){
                return false;
            }
        }
    }
    return true;
}

int main(){
    cin>>node>>endge;
    for(int i=0;i<endge;i++){
        int u,v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    bool is_bicolorable= true;
    for(int i=1;i<=node;i++) {
        if(visited[i] == 0){
            color[i]=1;
            bool ok= dfs(i);
            if(!ok){
                is_bicolorable = false;
                break;
            }
        }
    }
    if(!is_bicolorable){
        cout<<"IMPOSSIBLE"<<'\n';
    }else{
        for(int i=1;i<=node;i++) {
            cout<<color[i]<<' ';
        }
    }


    
}