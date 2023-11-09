Make "target" from n given coins
Variation_01-> can take a coin more than once ,in how many ways can we make the target


**Problem Definition:**

Given a set of 'n' coins with different denominations and a target value, the task is to determine the number of ways the target value can be obtained by using the given coins. The variation in this problem allows for using a single coin multiple times to achieve the target value.

**Input:**
- A set of 'n' coins with different denominations.
- Target value to be achieved using these coins.

**Output:**
- The count of ways the target value can be formed by using the given coins.

**Problem Constraints:**
- The number of coins 'n' is a positive integer.
- The denominations of coins can be any positive integer value.
- The target value is a positive integer.

**Example:**
Suppose the given coins are [1, 2, 3] and the target value is 4.
- The number of ways the target value 4 can be achieved using the coins [1, 2, 3] is 4.
  - (1+1+1+1)
  - (1+1+2)
  - (1+3)
  - (2+2)
 

This problem involves a dynamic programming approach, specifically a variant of the classic 'Coin Change' problem, where the target can be achieved by counting the number of ways to make change using the given coins with repetitions allowed.