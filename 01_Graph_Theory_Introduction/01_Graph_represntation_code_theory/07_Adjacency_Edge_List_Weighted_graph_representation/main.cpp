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
#underected
#Unweighted
[
 [0,1,2]
 [1,2,3]
 [1,3,4]
 [2,3,5]
]

*/
#include<bits/stdc++.h>
using namespace std;
int main(){
  int nodes=4;
  vector<vector<int>> edge_list={
    {0,1,2},
    {1,2,3},
    {1,3,4},
    {2,3,5},

  };
  // edge_list.push_back({0,1,2});
  // edge_list.push_back({1,2,3});
  // edge_list.push_back({1,3,4});
  // edge_list.push_back({2,3,5});
  for(int i=0;i<edge_list.size();i++){
    cout<<edge_list[i][0]<<" "<<edge_list[i][1]<<"|"<<edge_list[i][2]<<'\n';
  }
}
