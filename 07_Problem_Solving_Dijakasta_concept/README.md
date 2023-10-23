# Shortest Path in a Weighted Undirected Graph

In this problem, you are given a weighted undirected graph with vertices numbered from 1 to n. Your task is to find the shortest path between vertex 1 and vertex n.

## Input

The input consists of the following:
- The first line contains two integers, n and m (2 ≤ n ≤ 10^5, 0 ≤ m ≤ 10^5), where n is the number of vertices and m is the number of edges.
- The next m lines contain information about each edge, each in the form ai, bi, and wi (1 ≤ ai, bi ≤ n, 1 ≤ wi ≤ 106), where ai and bi are the endpoints of the edge, and wi is the length of the edge.

It is possible that the graph may have loops and multiple edges between pairs of vertices.

## Output

You should write the output as follows:
- If there is no path between vertex 1 and vertex n, write the integer -1.
- If there is a path, write the shortest path between vertex 1 and vertex n. If there are multiple solutions, you can print any of them.

## Examples

**Input 1:**
```
5 6
1 2 2
2 5 5
2 3 4
1 4 1
4 3 3
3 5 1
```

**Output 1:**
```
1 4 3 5
```

**Input 2:**
```
5 6
1 2 2
2 5 5
2 3 4
1 4 1
4 3 3
3 5 1
```

**Output 2:**
```
1 4 3 5
```

In these examples, the first input describes the graph, and the second input provides the shortest path from vertex 1 to vertex n. If there's no path, you should output -1.