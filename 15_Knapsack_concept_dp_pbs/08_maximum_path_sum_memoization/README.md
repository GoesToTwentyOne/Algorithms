## Problem Definition: Minimum Path Sum

### Problem Description
Given an `m x n` grid filled with non-negative numbers, the task is to find a path from the top left to the bottom right that minimizes the sum of all numbers along this path. The movement is restricted to either moving down or right at any given point in time.

### Input
A grid represented as a 2D array `grid` of size `m x n`, where:
- `m` represents the number of rows in the grid.
- `n` represents the number of columns in the grid.
- The grid is filled with non-negative integers.

### Output
The minimum sum possible by traversing from the top-left corner to the bottom-right corner of the grid.

### Examples

#### Example 1:

**Input:** 
```
grid = [
  [1, 3, 1],
  [1, 5, 1],
  [4, 2, 1]
]
```

**Output:** 
```
7
```

**Explanation:** 
The path `1 → 3 → 1 → 1 → 1` minimizes the sum, resulting in a sum of 7.

#### Example 2:

**Input:** 
```
grid = [
  [1, 2, 3],
  [4, 5, 6]
]
```

**Output:** 
```
12
```

### Constraints
- `m == grid.length`
- `n == grid[i].length`
- `1 <= m, n <= 200`
- `0 <= grid[i][j] <= 200`

---

This problem involves finding the most efficient path from the top-left corner to the bottom-right corner of a grid, ensuring that the sum of numbers along this path is minimized. The task constraints limit movement to right or down directions only.

The provided `readme.md` outlines the problem, its inputs, outputs, examples, and constraints, which can be used as a reference when developing a solution or implementing an algorithm to solve the minimum path sum problem.