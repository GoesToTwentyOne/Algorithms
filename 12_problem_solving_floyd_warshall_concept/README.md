### City Roads and Shortest Routes

**Problem Statement**

You are given information about several cities connected by roads. Your task is to answer queries regarding the shortest route between two specified cities.

**Input**
- The number of cities, roads, and queries (n, m, q)
- Descriptions of the roads connecting the cities (m lines with a, b, and c representing road connections and their lengths)
- Queries specifying two cities (q lines with a and b)

**Output**
- For each query, print the length of the shortest route between the specified cities. If no route exists, print -1.

**Constraints**
- 1 ≤ n ≤ 500
- 1 ≤ m ≤ n^2
- 1 ≤ q ≤ 10^5
- 1 ≤ a, b ≤ n
- 1 ≤ c ≤ 10^9

**Example**

Input:
```
4 3 5
1 2 5
1 3 9
2 3 3
1 2
2 1
1 3
1 4
3 2
```

Output:
```
5
5
8
-1
3
```

This problem aims to determine the shortest route length between given cities in a network of roads connecting multiple cities.