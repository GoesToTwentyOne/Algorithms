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


Advantages and Disadvantages
number of node = 10
number of edge = 2
1-----2
4-----5

For Adjacency matrix,
nxn = O(n^2)
Adjacency_matrix[0][1]=1
Adjacency_matrix[1][0]=1
Adjacency_matrix[4][5]=1
Adjacency_matrix[5][4]=1

Time complexity=O(n^2)
Space complexity=O(n^2)



For Adjacency list,
Adjacency_list[0]={1};
Adjacency_list[1]={0};
Adjacency_list[4]={5};
Adjacency_list[5]={4};
if edge is low it will be better from Matrix
Time complexity=O(E)*
Space complexity=O(E)*

Weighted using Matrix
  4
1-----2
  9
4-----5
adjacency_matrix[1][2]=4
adjacency_matrix[2][1]=4
adjacency_matrix[4][5]=9
adjacency_matrix[5][4]=9


Weighted directed using Matrix,
   4
1----->2
   9
4<-----5
adjacency_matrix[1][2]=4
adjacency_matrix[5][4]=9




*/

#include<bits/stdc++.h>
using namespace std;
int main(){
  int nodes=10;
  int adjacency_matrix[nodes][nodes]={};
  //weightd graph only
/*
     4
  1-----2
     9
  4-----5
  */
  adjacency_matrix[1][2]=4;
  adjacency_matrix[2][1]=4;
  adjacency_matrix[4][5]=9;
  adjacency_matrix[5][4]=9;


  //weighted and directed graph only
  /*
       4
    1----->2
       9
    4<-----5
    */
  //adjacency_matrix[1][2]=4;
  //adjacency_matrix[5][4]=9;

 //O(n^2)
  for(int i=0;i<nodes;i++){
    for(int j=0;j<nodes;j++){
      cout<<adjacency_matrix[i][j]<<" ";
    }
    cout<<'\n';
  }

}
