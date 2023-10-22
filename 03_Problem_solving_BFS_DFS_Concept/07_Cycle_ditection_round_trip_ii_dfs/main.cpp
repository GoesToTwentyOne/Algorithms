#include<bits/stdc++.h>
using namespace std;
int const N=2e5;
int node,edge;
vector<int> adj_list[N];
int visited[N];
bool cycle_detection(int node){
    visited[node] = 1;
    for(int adj_node : adj_list[node]){
        /*
            - visited[adj_node] == 0 -> unexplored node |apply dfs
            - visited[adj_node] == 1 -> "paused" node | cycle detected
            - visited[adj_node] == 2 -> "done" node | continue
        */
        if(visited[adj_node]==0){
            bool cycle_got=cycle_detection(adj_node);
            if(cycle_got) return true;
        }
        else if(visited[adj_node]==1){
            return true;
        }
        // else if(visited[adj_node]==2){
        //     return false;
        // }
        

    }
    visited[node] = 2;
    return false;
}
int main(){
    cin>>node>>edge;
    for(int i=0;i<edge;i++){
        int u,v;
        cin>>u>>v;
        adj_list[u].push_back(v);
    }
    bool ok = false;
    for(int i=1;i<=node;i++){
        if(visited[i]== 0){
            bool is_cycle=cycle_detection(i);
            if(is_cycle) ok = true;
            break;
        }

    }
    if(ok) cout<<"YES,cycle exist"<<endl;
    else cout<<"NO, doesn't exist"<<endl;

}