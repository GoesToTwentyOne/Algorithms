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


o--->[1]
1--->[0,2,3]
2--->[1,3]
3--->[1,2]

Time complexity=O(n^2)
Space complexity=O(n^2)
*/


#include<bits/stdc++.h>
using namespace std;
int main(){
  int nodes=4;
  vector<int> adjacency_list[nodes];
  adjacency_list[0]={1};
  adjacency_list[1]={0,2,3};
  adjacency_list[2]={1,3};
  adjacency_list[3]={1,2};
  for(int i=0;i<nodes;i++){
    cout<<i<<" --> ";
    for(int j=0;j<adjacency_list[i].size();j++){
      cout<<adjacency_list[i][j]<<" ";
    }
    cout<<'\n';
  }

}
