### Problem Definition: Unique Paths

#### Problem Description
A robot is situated on an m x n grid, initially positioned at the top-left corner (grid[0][0]). The robot aims to traverse to the bottom-right corner (grid[m - 1][n - 1]). The robot is limited to moving either downward or rightward at any given point in time.

Given two integers `m` and `n`, the task is to determine the count of unique possible paths the robot can take to reach the bottom-right corner of the grid.

The paths are constrained to downward or rightward movements.

#### Example

##### Input
```plaintext
m = 3, n = 7
```
##### Output
```plaintext
28
```
##### Input
```plaintext
m = 3, n = 2
```
##### Output
```plaintext
3
```
##### Explanation
From the top-left corner, there are three ways to reach the bottom-right corner:
1. Right -> Down -> Down
2. Down -> Down -> Right
3. Down -> Right -> Down

#### Constraints
- 1 <= m, n <= 100

#### Additional Information
The test cases are structured so that the resulting answer will always be less than or equal to 2 * 10^9.

#### Metrics
- Difficulty: Medium
- Acceptance Rate: 63.8%
- Total Accepted: 1.6M
- Total Submissions: 2.6M

#### Companies
This problem has been encountered in interviews by various companies.

### Notes
The problem focuses on determining the number of unique paths a robot can take to move from the top-left corner to the bottom-right corner of an m x n grid by only moving downward or rightward.