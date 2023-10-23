#include<bits/stdc++.h>
using namespace std;
int const N=1e5;
vector<int>adj_list[N];
int visited[N];
stack<int> done_stack;
void dfs(int node){
    visited[node]=1;
    for(int adj_node : adj_list[node]){
        if(visited[adj_node]==0){
            dfs(adj_node);
        }
    }
    done_stack.push(node);

}
int main(){
    int node,edge;
    cin>>node>>edge;
    for(int i=0;i<edge;i++){
        int u,v;
        cin>>u>>v;
        adj_list[u].push_back(v);
    }
    for(int i=1;i<=node;i++){
        if(visited[i]==0){
            dfs(i);
        }
    }
    while(! done_stack.empty()){
        cout<<done_stack.top()<<" ";
        done_stack.pop();
    }

}