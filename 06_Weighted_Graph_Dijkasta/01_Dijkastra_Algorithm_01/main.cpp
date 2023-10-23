#include<bits/stdc++.h>
using namespace std;
const int  N= 1e5;
const int INF = 1e9;

int visited[N];
int distance_array[N];
int node,edge;
vector<pair<int,int>> adj_list[N];
void dijkastra(int src){
    for(int i=1;i<=node;i++){
        distance_array[i] =INF;
    }
    distance_array[src]=0;
    for(int i=0;i< node;i++){
        int selected_node=-1;
        for(int j=1;j<node;j++){
            if(visited[j]==1) continue;
            if(selected_node==-1 || distance_array[selected_node]> distance_array[j]){
                selected_node = j;
            }
        }
        visited[selected_node] = 1;
        for( pair<int,int> adj_entry : adj_list[selected_node] ){
            int adj_node=adj_entry.first;
            int edge_cost=adj_entry.second;
            if(distance_array[selected_node]+edge_cost< distance_array[adj_node]){
                distance_array[adj_node]=distance_array[selected_node]+edge_cost;
            }
            

        }

    }

}
int main(){
    cin>> node >> edge;
    for( int i=0;i<edge;i++ ){
        int u,v,w;
        cin>>u>>v>>w;
        adj_list[u].push_back({v,w});
        adj_list[v].push_back({u,w});

    }
    int src=1;
    dijkastra(src);
    for(int i=1;i<=node;i++){
        cout<<distance_array[i]<<" ";
    }
    cout<<'\n';


}