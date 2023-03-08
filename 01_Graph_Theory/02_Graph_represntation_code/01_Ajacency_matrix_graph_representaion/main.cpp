/*
Graph Representation
=======================
Topic:Adjacency matrix
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
matrix=#of nodes x #of nodes
       4x4
condition:
  matrix [i][j]=1:
          if and only if i->j using 1 nodes


  0--->1
  1--->0
  1--->2
  1--->3
  2--->1
  2--->3
  3--->1
  3--->2

0 1 0 0
1 0 1 1
0 1 0 1
0 1 1 0

Time complexity=O(n^2)
Space complexity=O(n^2)
*/


#include<bits/stdc++.h>
using namespace std;
int main(){
  int nodes=4;
  int adjacency_matrix[nodes][nodes]={};
  // for(int i=0;i<nodes;i++){
  //   for(int j=0;j<nodes;j++){
  //     adjacency_matrix[i][j]=0;
  //   }
  // }
  //O(E)=O(n^2)     maximum Edge(n*n)=n^2
  adjacency_matrix[0][1]=1;

  adjacency_matrix[1][0]=1;
  adjacency_matrix[1][2]=1;
  adjacency_matrix[1][3]=1;

  adjacency_matrix[2][1]=1;
  adjacency_matrix[2][3]=1;

  adjacency_matrix[3][1]=1;
  adjacency_matrix[3][2]=1;

 //O(n^2)
  for(int i=0;i<nodes;i++){
    for(int j=0;j<nodes;j++){
      cout<<adjacency_matrix[i][j]<<" ";
    }
    cout<<'\n';
  }

}
