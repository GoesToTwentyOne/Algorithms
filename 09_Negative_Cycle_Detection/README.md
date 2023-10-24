Certainly! Here's a documentation for detecting negative cycles in a graph using the Bellman-Ford algorithm:

---

# Negative Cycle Detection with Bellman-Ford Algorithm

## Introduction

Negative cycle detection is a fundamental problem in graph theory and optimization. A negative cycle is a cycle in a weighted graph where the sum of the edge weights along the cycle is negative. Detecting negative cycles is important in various applications such as finding arbitrage opportunities in financial markets, optimizing network flows, and solving the shortest path problem in graphs with negative weight edges.

The Bellman-Ford algorithm is a widely used method for detecting negative cycles in a directed graph. It not only finds the shortest path from a source node to all other nodes but also detects the presence of negative cycles. If a graph contains a negative cycle, the algorithm identifies it during its execution.

## Algorithm Overview

The Bellman-Ford algorithm is used for the following purposes:

1. Initialize the distance to the source node as 0 and all other distances to positive infinity.
2. Iterate through all edges multiple times (usually for `n-1` iterations for a graph with `n` nodes) and update the distances.
3. If, after the `n-1` iterations, the distances can still be further minimized, it indicates the presence of a negative cycle.

## Pseudocode

Here's the pseudocode for the Bellman-Ford algorithm with negative cycle detection:

```plaintext
The pseudocode you've provided describes the Bellman-Ford algorithm for finding the shortest distances from a source node to all other nodes in a weighted graph. While the core algorithm is correct, there's a small issue with the time complexity analysis you've provided. The time complexity is not necessarily O(E*V), but it's usually O(V*E) because the order of the nested loops should be considered.
- Input -> A weighted graph and a src node (with no negative cycle)
- Output -> Shortest distance from src node to all other nodes

Relaxation Formula
	d[u]+c(u,v) < d[v]
	=> d[v]=d[u]+c(u,v)

Here's the corrected analysis:

- Create a distance array "d" with all values set to infinity. O(n)
- Set d[src] = 0  O(1)
- set negative_cycle = false
- For i = 1 to n: O(V)
  - For all edges (u, v, w): O(E)
    - If d[u] + w < d[v]: O(1)
      - Update d[v] = d[u] + w  O(1)
	  - if i == n:
	  		- negative_cycle=true
- print negative_cycle Exist
- Print the distance array "d"  O(n)

- Time Complexity -> O(E*V)
		- -> O(|E| *|V|)
		- -> O(n^3)
- Space Complexity -> O(n)

The time complexity is indeed O(V*E) or O(|V| * |E|), not O(E*V), and in the worst case, it can be O(n^3) if there are O(n^2) edges.
So, to clarify, the time complexity of the Bellman-Ford algorithm is O(V*E) or O(n^2) for dense graphs, and it can go up to O(n^3) for the worst-case scenario when there are many edges.
```

## Usage

To use the Bellman-Ford algorithm for negative cycle detection:

1. Provide the graph as a set of vertices and edges.
2. Specify the source node.
3. Run the Bellman-Ford algorithm.
4. If the algorithm returns "Negative cycle found," a negative cycle exists in the graph.

## Complexity

The Bellman-Ford algorithm has a time complexity of O(|V| * |E|), where |V| is the number of vertices and |E| is the number of edges. It's important to note that the detection of negative cycles in a graph may require running the algorithm multiple times.

## Conclusion

The Bellman-Ford algorithm is a versatile tool for finding the shortest paths and detecting negative cycles in weighted graphs. When dealing with graphs that may contain negative cycles, this algorithm provides a reliable method to identify and address them, making it invaluable in a variety of real-world applications.

---

This documentation provides an overview of negative cycle detection using the Bellman-Ford algorithm, its pseudocode, usage, and complexity analysis. It's a fundamental technique for solving problems involving graphs with negative weight cycles.