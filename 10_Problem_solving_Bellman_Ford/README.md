### Negative Cycle Detection in Directed Graph

Given a directed graph represented by 'n' nodes and 'm' edges, the task is to determine the presence of a negative cycle within the graph. If such a cycle exists, the objective is to identify and display one of the negative cycles present.

### Input

The input consists of:
- The first line containing two integers, 'n' and 'm', indicating the number of nodes and edges in the graph, respectively.
- 'm' subsequent lines describing the edges. Each line comprises three integers: 'a', 'b', and 'c', where 'a' and 'b' denote nodes, and 'c' represents the length of the edge from node 'a' to node 'b'.

### Output

If a negative cycle exists in the graph, the program should output "YES" followed by the nodes forming the cycle in their correct sequential order. If multiple negative cycles exist, any of them can be printed. In case no negative cycles are found, the program should output "NO".

### Constraints

- 1 ≤ n ≤ 2500
- 1 ≤ m ≤ 5000
- 1 ≤ a, b ≤ n
- (-10^9) ≤ c ≤ (10^9)

### Example

**Input:**
```
4 5
1 2 1
2 4 1
3 1 1
4 1 -3
4 3 -2
```

**Output:**
```
YES
1 2 4 1
```

---

For further details, refer to the problem statement and its constraints.

This problem is a fundamental task in graph theory, requiring the detection of negative cycles within directed graphs, which has applications in various fields like network analysis, circuit optimization, and more. The objective is to design an algorithm to efficiently identify the presence of negative cycles and demonstrate their existence within the provided directed graph.