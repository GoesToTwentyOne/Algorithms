## Searching in Graph using BFS
Searching in a graph is a fundamental problem in computer science that has many applications, including pathfinding, web crawling, and social networking analysis. One of the most popular algorithms used for searching in graphs is the Breadth-First Search (BFS) algorithm.

## What is BFS?
BFS is a graph traversal algorithm that explores all the vertices of a graph in breadth-first order, i.e., it visits all the vertices at the same level before moving to the next level. In other words, BFS starts at a specific vertex in the graph and visits all the vertices that are reachable from that vertex before moving on to the next vertex.

## How does BFS work?
The BFS algorithm starts by visiting a specific vertex in the graph and adding it to a queue. It then visits all the neighbors of that vertex and adds them to the queue. It continues this process until all the vertices in the graph have been visited.

## Here is the pseudocode for the BFS algorithm:
BFS(graph, source)
- Initiate an array called "visited" and an empty queue "q"
- mark visited[source]=1 and q.push(source)
while the queue q is not empty:
    -head=q.front()
    - q.pop()
  - print the node head
  - for all adjacent nodes of "head":
      - if visited[adj_node]==0:
          - visited[adj_node]=1 and q.push(adj_node)
## Complexity Analysis from pseudocode
Time Complexity=O(V+E)\for complete grap = O(V+V^2)=O(V^2)
Space Complexity=O(V)

## Advantages of BFS
BFS guarantees that the shortest path between the starting vertex and any other vertex in the graph is found first.
BFS can be used to check if a graph is connected or not.
BFS can be used to find the diameter of a tree or a graph.
How to implement BFS in your project?
Implementing BFS in your project involves creating a graph data structure and writing code to traverse the graph using the BFS algorithm. You can use any programming language of your choice to implement BFS.

## Here are the steps to implement BFS in your project:

Define a graph data structure to represent the graph.
Create a function to traverse the graph using the BFS algorithm.
Call the BFS function with the starting vertex to start the traversal.
Conclusion
In conclusion, BFS is a powerful algorithm for searching in graphs. It can be used in a wide range of applications and is relatively easy to implement in your project. By understanding how BFS works and how to implement it, you can solve a wide range of problems in computer science.
