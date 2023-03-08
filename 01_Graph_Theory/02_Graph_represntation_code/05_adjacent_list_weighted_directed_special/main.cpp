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
List =#of nodes
       4
   2
0---->1
   4
1---->2
   6
3---->2
   10
3---->1

0---->(1,2)
1---->(2,6)
2---->
3---->(2,6),(1,10)

*/
#include<bits/stdc++.h>
using namespace std;
int main(){
  int nodes=4;
  vector<pair<int,int>> adjacency_list[nodes];
  adjacency_list[0]={{1,2}};
  adjacency_list[1]={{2,6}};
  adjacency_list[2]={};
  adjacency_list[3]={{2,6},{1,10}};
  for(int i=0;i<nodes;i++){
    cout<<i<<"---->";
    for(int j=0;j<adjacency_list[i].size();j++){
      cout<<"("<<adjacency_list[i][j].first<<", "<<adjacency_list[i][j].second<<"),";
    }
    cout<<'\n';
  }
}
