/*
- state: f(n) -> longest distance from root to node n
- recurrance: f(n) = max{ f(p_1), f(p_2), ... f(p_m) } + 1
                     where p_i is an immediate parent of node n
- base case: f(root) = 0



node ----> [child_1, child_2 ...]

child ---> [parent1, paren2 ...]

*/
#include<bits/stdc++.h>
using namespace std;
const int N =1e5;
int dp[N];
vector<int> parent_list[N];
int root,destination_node;

int max_distance_DAG(int node){
    if(node == root) return 0;
    if(dp[node]!=-1) return dp[node];
    int ans=0;
    for(int parent :parent_list[node]){
        int parent_distance=max_distance_DAG(parent);
        ans=max(ans,parent_distance);
    }
    dp[node]=ans+1;
    return dp[node];
}
int main(){
    int n,m;
    cin >> n >> m;
    for(int i=1;i<=m;i++){
        int u,v;
        cin>>u>>v;
        parent_list[v].push_back(u);// there exists an edge from u to v (u --> v)
    }
    for(int i=1;i<=m;i++){
        dp[i]=-1;
    }
    cin>>root>>destination_node;
    cout<<max_distance_DAG(destination_node)<<endl;
}