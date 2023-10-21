## Searching in Graph using DFS
Searching in a graph is a fundamental problem in computer science that has many applications, including pathfinding, web crawling, and social networking analysis. One of the most popular algorithms used for searching in graphs is the Depth-First Search (DFS) algorithm.

## What is DFS?
DFS is a graph traversal algorithm that explores all the vertices of a graph by visiting as far as possible along each branch before backtracking. In other words, DFS starts at a specific vertex in the graph and explores as far as possible before backtracking to explore the other paths.

## How does DFS work?
The DFS algorithm starts by visiting a specific vertex in the graph and marking it as visited. It then recursively visits all the neighbors of that vertex that have not been visited and marks them as visited. It continues this process until all the vertices in the graph have been visited.

## Here is the pseudocode for the DFS algorithm:
DFS(graph, source)
          - Initiate an array called "visited"
          - mark visited[source]=1
          - print the node source
          - for all adjacent nodes of "source":
                  - if visited[adj_node]==0:
                            - call DFS(adj_node)
## Complexity Analysis from pseudocode
- Time Complexity=O(V+E)
- Space Complexity=O(V)

## Advantages of DFS
DFS can be used to find a path between two nodes in a graph.
DFS can be used to detect cycles in a graph.
DFS can be used to generate a topological sorting of a directed acyclic graph.

## How to implement DFS in your project?
Implementing DFS in your project involves creating a graph data structure and writing code to traverse the graph using the DFS algorithm. You can use any programming language of your choice to implement DFS.

## Here are the steps to implement DFS in your project:
Define a graph data structure to represent the graph.
Create a function to traverse the graph using the DFS algorithm.
Call the DFS function with the starting vertex to start the traversal.

##  Conclusion
In conclusion, DFS is a powerful algorithm for searching in graphs. It can be used in a wide range of applications and is relatively easy to implement in your project. By understanding how DFS works and how to implement it, you can solve a wide range of problems in computer science.
