# Dijkstra's Algorithm README

## Overview

Dijkstra's Algorithm is a widely-used algorithm for finding the shortest path in a weighted graph. This README provides an overview of Dijkstra's Algorithm, its use cases, and implementation in various programming languages. 

## Table of Contents

1. [Introduction](#introduction)
2. [Algorithm Overview](#algorithm-overview)
3. [Use Cases](#use-cases)
4. [Implementation](#implementation)
5. [Performance](#performance)
6. [References](#references)

## Introduction

Dijkstra's Algorithm, developed by Edsger W. Dijkstra in 1956, is a greedy algorithm used to find the shortest path between nodes in a graph, particularly in the presence of non-negative edge weights. It is widely employed in various applications, including network routing, transportation, and computer science.

### Pseudocode 1

```plaintext
# Dijkstra's Algorithm Pseudocode

// Input: Weighted graph and a source node
// Output: Distance of all nodes from the source

/*
u -> v

if d[u] + c(u, v) < d[v]:
    d[v] = d[u] + c(u, v)

*/

// Space Complexity: O(n)/O(V)
// Time Complexity: O(n^2)/O(V^2)

- create a distance array "d"
- initialize all values of "d" to infinity 
- d[src] = 0
- create a visited array and mark all nodes as unvisited

- for i = 0  to n - 1: O(n)
    - pick the "unvisited" node with minimum d[node] 
    - visited[node] = 1
    - for all adj_node of node:  O(E)  | O(n)
        - if d[node] + c(node, adj_node) < d[adj_node]:
            - d[adj_node] = d[node] + c(node, adj_node)

- Output array "d".

```

### Pseudocode 2 Optimization

```plaintext
// input -> a weighted graph and a source
// ouput -> distance of all nodes from the source

/*
u -> v

if d[u] + c(u, v) < d[v]:
    d[v] = d[u] + c(u, v)

*/


// space complexity -> O(m)
// time complexity ===> O(m log n)

- create a distance array "d"  
- initialize all values of "d" to infinity  -> O(n)
- d[src] = 0
- create a visited array and mark all nodes as unvisited -> O(n)
- take an empty reverse priority_queue "pq"
- pq.push({0, src})

- while the priority_queue is not empty: -> O(E)
    - head_distance, head = pq.front() 
    - pq.pop() -> O(log E)
    - if visited[head] == 1: ignore
    - visited[head] = 1
    - for all adj_node of head: -> O(E)
        - if d[head] + c(head, adj_node) < d[adj_node]:
            - d[adj_node] = d[head] + c(head, adj_node)
            - pq.push({ d[adj_node], adj_node }); -> O(log E)

- ouput array "d" 

 
 O(n) + O(E log E) + O(E log E)
 -> O(|E| log |E|) 
 -> O(|E| log |V^2|)
 -> O(2|E| log |V|)
 -> O(|E| log |V|)   [base 2]





```
## Time and Space Complexity

- **Time Complexity**: O(n^2) for a simple implementation or O(E + V log V) when using a priority queue or min-heap.
- **Space Complexity**: O(n).

The provided pseudocode offers a clear and concise representation of Dijkstra's Algorithm and can serve as a starting point for your implementation in various programming languages. It is important to adapt and optimize the algorithm based on your specific use case and the graph structure you are working with.
## Algorithm Overview

Dijkstra's Algorithm operates as follows:

1. Initialize distances from the source node to all other nodes as "infinity" and the distance from the source node to itself as 0.

2. Create an empty priority queue (or min-heap) to hold the nodes.

3. Add the source node to the priority queue with a distance of 0.

4. While the priority queue is not empty:
   a. Extract the node with the smallest distance from the priority queue.
   b. For each neighboring node of the extracted node:
      - Calculate the distance from the source node through the extracted node.
      - If this distance is shorter than the previously recorded distance to the neighboring node, update the distance.
   c. Repeat steps (a) and (b) until the priority queue is empty.

5. The algorithm terminates when all nodes have been visited, and you will have the shortest distances from the source node to all other nodes.

6. You can trace back to find the shortest path itself.

## Use Cases

Dijkstra's Algorithm is used in a variety of applications, including:
- **Routing Algorithms:** Used in GPS navigation systems and network routing protocols.
- **Transportation:** Finding optimal routes for vehicles or pedestrians.
- **Computer Networking:** Calculating the shortest path in networks.
- **Game Development:** Implementing pathfinding algorithms in video games.
- **Robotics:** Planning the most efficient paths for robots.



## Dijkstra's Limitation
Dijkstra's algorithm is a widely used algorithm for finding the shortest path in a graph, particularly in scenarios where all edge weights are non-negative. However, it does have some limitations and assumptions that you should be aware of:

1. Non-Negative Edge Weights: Dijkstra's algorithm assumes that all edge weights are non-negative. If there are negative edge weights in the graph, Dijkstra's algorithm can produce incorrect results.

2. Single-Source, Single-Destination: Dijkstra's algorithm is typically used to find the shortest path from a single source vertex to a single destination vertex. It may not be the most efficient choice if you need to find shortest paths from one source to multiple destinations, as you would have to run the algorithm multiple times.

3. Greedy Approach: Dijkstra's algorithm is a greedy algorithm, meaning it makes locally optimal choices at each step. This can lead to incorrect results if used in situations where global optimization is required, such as in graphs with negative weight cycles.

4. Complexity: The time complexity of Dijkstra's algorithm is O(V^2) when using an adjacency matrix and O((V + E) * log(V)) when using a binary heap or Fibonacci heap data structure. This can be a limitation when dealing with very large graphs.

5. Memory Usage: Dijkstra's algorithm requires a priority queue data structure to keep track of the vertices to visit. The memory requirements for this data structure can be significant, especially for large graphs.

6. No Path Information: Dijkstra's algorithm finds the shortest path length but doesn't provide information about the actual path itself. If you need the path as well, you must maintain additional data structures during the algorithm's execution.

7. Inefficient for Sparse Graphs: In graphs with few edges, Dijkstra's algorithm can be less efficient compared to other algorithms like the A* algorithm or Bidirectional Search.

To address some of these limitations, various modifications and alternative algorithms have been developed, such as the Bellman-Ford algorithm for graphs with negative edge weights, and A* search for more efficient pathfinding in specific scenarios. The choice of algorithm depends on the specific characteristics and requirements of your problem.
8. Negative Edge
9. Negative Cycle



## Performance


Dijkstra's Algorithm has a time complexity of O(V^2) for the simple implementation where you search for the minimum distance in the distance array linearly. By using a priority queue or min-heap data structure, you can reduce the time complexity to O(E + V log V), where V is the number of vertices and E is the number of edges.

## References

For further information and in-depth understanding of Dijkstra's Algorithm, you can refer to the following resources:

- [Wikipedia - Dijkstra's Algorithm](https://en.wikipedia.org/wiki/Dijkstra%27s_algorithm)
- [GeeksforGeeks - Dijkstra's Shortest Path Algorithm](https://www.geeksforgeeks.org/dijkstras-shortest-path-algorithm-greedy-algo-7/)
- [Introduction to Algorithms by Thomas H. Cormen](https://en.wikipedia.org/wiki/Introduction_to_Algorithms)

This README provides a basic introduction to Dijkstra's Algorithm. To use it effectively in your specific context, you may need to adapt and extend the algorithm based on your requirements and the specific graph structure you are working with.