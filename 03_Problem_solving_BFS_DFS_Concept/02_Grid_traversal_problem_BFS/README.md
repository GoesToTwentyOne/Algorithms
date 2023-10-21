You are tasked with finding a path from the start (A) to the end (B) in a labyrinth, which can be navigated by moving left (L), right (R), up (U), or down (D). The labyrinth is represented as a grid of characters where '#' denotes walls, '.' is a floor, 'A' is the starting point, and 'B' is the destination.

**Input**
- The first line contains two integers, n and m, representing the height and width of the labyrinth.
- The following n lines contain m characters each, describing the labyrinth.

**Output**
- If there is a path from A to B, print "YES." Otherwise, print "NO."
- If a path exists, print the length of the shortest path and provide its description as a string of L, R, U, and D characters. Multiple valid solutions are possible.

**Constraints**
- 1 ≤ n, m ≤ 1000

**Example**
**Input:**
```
5 8
########
#.A#...#
#.##.#B#
#......#
########
```

**Output:**
```
YES
9
LDDRRRRRU
```

In this example, there is a path from 'A' to 'B', and the shortest path has a length of 9. The description of the path is "LDDRRRRRU."