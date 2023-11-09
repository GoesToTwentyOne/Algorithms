Make "target" from n given coins
Variation_01-> can't take a coin more than once ,can we make the target (true or false)

# Problem Definition

## Target Sum from Given Coins

### Overview
Given a set of **n** coins with distinct denominations and a **target** value, the task is to determine whether it is possible to make the **target** amount by using each coin at most once.

### Problem Statement
The problem is to ascertain whether it is feasible to reach the **target** value by selecting coins from the given set, each coin being used at most once.

### Input
- **n**: Number of coins available.
- **coins[]**: An array containing **n** distinct coin denominations.
- **target**: The value to achieve using the coins.

### Output
- A boolean value indicating whether it is possible to form the **target** sum using each coin at most once.

### Constraints
- 1 <= n <= 100
- 1 <= coins[i] <= 10^3, where 0 <= i < n
- 1 <= target <= 10^5

### Variation_01
In this variation, the rule is that each coin can only be used once to achieve the target amount. The objective is to decide whether the **target** sum can be attained by selecting each coin at most once.

### Example
- **Input**:
    - `n = 4`
    - `coins = [1, 2, 5, 7]`
    - `target = 10`
- **Output**: `True`
- **Explanation**: By selecting coins with denominations 2, 5, and 7, the target sum of 10 can be achieved without using any coin more than once.

### Proposed Approach
One potential solution approach to this problem could involve the utilization of a backtracking algorithm or dynamic programming to explore all possible coin selections, ensuring each coin is used at most once while attempting to reach the **target** sum.

### Files
- `main.py`: Python code that implements the solution for this problem.
- `input.txt`: Sample input file containing test cases.
- `output.txt`: Sample output file showcasing expected outputs corresponding to the provided test cases.

### Execution
Execute the `main.py` file, providing the necessary inputs as per the defined format in the `input.txt` file. The output generated will be compared against the expected output in `output.txt`.

### Further Instructions
- Ensure the inputs adhere to the specified constraints.
- Validate the input and output files for correct formatting and accuracy.

### Note
The problem statement and approach might be subject to modifications based on further insights or requirements.