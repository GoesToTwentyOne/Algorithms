## Graph Representation in Graph Theory
In graph theory, a graph is a mathematical structure consisting of a set of vertices (also known as nodes) and a set of edges connecting them. There are several ways to represent a graph, each with its advantages and disadvantages. In this article, we will discuss the four most common representations: adjacency matrix, adjacency list, incidence matrix, and graph drawing.

## Adjacency Matrix
An adjacency matrix is a square matrix where the rows and columns correspond to the vertices of the graph. The entry in row i and column j is 1 if there is an edge from vertex i to vertex j, and 0 otherwise. If the graph is undirected, the matrix will be symmetric. The main advantage of this representation is that it allows for fast edge lookup. However, it is memory-intensive and impractical for large sparse graphs.

## Adjacency List
An adjacency list is a list of lists, where each list represents the vertices adjacent to a particular vertex. For example, if the vertex 1 is adjacent to vertices 2, 3, and 4, then the first list in the adjacency list will contain the numbers 2, 3, and 4. The main advantage of this representation is that it is memory-efficient for large sparse graphs. However, it is slower for edge lookup than the adjacency matrix.

## Incidence Matrix
An incidence matrix is a matrix where the rows correspond to the vertices and the columns correspond to the edges. The entry in row i and column j is 1 if vertex i is incident to edge j, and 0 otherwise. This representation is useful for certain graph problems, such as network flow problems. However, it is memory-intensive and not as common as the adjacency matrix and adjacency list.


## Graph Drawing
A graph can also be represented visually, through graph drawing. In this representation, vertices are represented as points or circles, and edges are represented as lines connecting them. This representation is useful for understanding the structure of the graph visually, but it does not provide the same level of computational power as the other representations.

Here is an example of a graph drawing:

Graph Drawing Example

The choice of representation depends on the problem at hand, as each representation has its advantages and disadvantages..



## Practice Problems:

## How many edges does a tree with n nodes have?
* A tree with n nodes always has n-1 edges.
This can be proven using mathematical induction or by using the fact that a tree is a connected acyclic graph.
The base case is when n=1, which is trivial since a tree with only one node has no edges.
Assume that for a tree with k nodes, where k>1, the number of edges is k-1.
Now consider a tree with k+1 nodes. Choose any leaf node in the tree (a leaf node is a node with degree 1) and remove it, along with its incident edge. This results in a tree with k nodes. By our assumption, this smaller tree has k-1 edges.

If we add back the leaf node we removed, we add one new edge to the tree. Therefore, the total number of edges in the tree with k+1 nodes is (k-1) + 1 = k, which completes the induction step.
Therefore, a tree with n nodes always has n-1 edges.

## How many edges does a complete graph with n nodes have?
* A complete graph with n nodes has n*(n-1)/2 edges.

In a complete graph, every node is connected to every other node by an edge. Therefore, each of the n nodes has n-1 edges incident to it, since there are n-1 other nodes to which it can be connected.

However, each edge is counted twice, once for each of the two nodes that it connects. Therefore, the total number of edges in a complete graph is n*(n-1)/2.

For example, a complete graph with 4 nodes would have 4*(4-1)/2 = 6 edges, while a complete graph with 6 nodes would have 6*(6-1)/2 = 15 edges.
| 1  | 0 | 0 | 1 |
