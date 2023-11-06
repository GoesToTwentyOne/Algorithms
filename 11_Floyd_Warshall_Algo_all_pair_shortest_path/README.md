# Floyd-Warshall Algorithm

## Overview
The Floyd-Warshall algorithm is a method for finding the shortest paths in a weighted graph with positive or negative edge weights (but with no negative cycles). It computes the shortest path between all pairs of vertices in a graph, providing a way to find the shortest path between any two nodes.

## Usage
The algorithm is commonly used in various applications such as network routing protocols, finding shortest paths in transportation networks, and in various graph-related problems.

### Why Use the Floyd-Warshall Algorithm?
- **All-Pairs Shortest Path:** It efficiently computes the shortest path between all pairs of vertices in a graph.
- **Weighted Graphs:** It can handle both positive and negative edge weights.

### Advantages
- **Versatility:** The algorithm works for both directed and undirected graphs.
- **Ease of Implementation:** Relatively straightforward to implement.
- **Handles Negative Weights:** Capable of handling negative edge weights (as long as there are no negative cycles).

### Disadvantages
- **Higher Complexity:** The algorithm's time complexity is O(V^3), making it less efficient for larger graphs.
- **Space Complexity:** It requires a larger amount of memory space for the matrix representation of the graph.

## Complexity
- **Time Complexity:** O(V^3) where V is the number of vertices in the graph.
- **Space Complexity:** O(V^2) for the matrix representation.

## How it Works
The algorithm works by iteratively updating the shortest path between any two vertices by considering all intermediate vertices. This process is repeated for all pairs of vertices until the shortest paths are determined.

### Pseudocode
```
- Input -> A weighted graph as an adjacency matrix
- Output -> All pair shortest distances between vertices
- Create a distance matrix "d" Where d[i][j]=w where there is a direct edge from node "i" to node "j" and the cost is "w"   O(v^2)
- for all nodes "u" and "v" where there isn't a direct edge from node "u" to node "v" d[i][j]= INF
- for all nodes "i" distance  of [i][i] = 0

- for all node "k": O(V)
    - for all nodes "u": O(V)
        -  for all nodes "v": O(V)
            - d[u][v]= min(d[u][v], d[u][k] + d[k][v])  => O(V^3)

- all pair shortest distance "d"
- Time complexity -> O(V^3)
-  Space complexity -> O(V^2)
```

## Applications
- **Routing Protocols:** Used in network routing protocols to find the shortest path between nodes in a network.
- **Transportation Networks:** Helps in finding the most efficient routes in transportation networks like GPS navigation systems.
- **Traffic Engineering:** Aids in traffic engineering for efficient road networks.

## Conclusion
The Floyd-Warshall algorithm is a fundamental method for finding the shortest paths in a graph, providing a versatile solution for various real-world problems. However, its higher time complexity can make it less efficient for larger graphs compared to other algorithms like Dijkstra's algorithm or Bellman-Ford algorithm for specific scenarios.