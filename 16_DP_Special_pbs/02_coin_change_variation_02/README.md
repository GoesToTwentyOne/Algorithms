Make "target" from n given coins
Variation_01-> can't take a coin more than once ,in how many ways can we make the target
Certainly! Here's a sample readme.md for the problem of making a "target" value from a given set of coins without being able to use a coin more than once:

### Problem Definition

#### Task
The task involves determining the number of ways to make a specific target value using a given set of coins, with the restriction that each coin can only be used once.

#### Problem
Given a set of n coins with distinct denominations and a target value, determine the number of unique combinations in which these coins can be used to reach the target value. The goal is to find all possible combinations without repeating the usage of the same coin.

#### Example
- **Input:** 
    - Set of coins: [1, 2, 5]
    - Target value: 5
- **Output:** 
    - The number of ways to make the target value 5 using the given coins without using the same coin more than once is 4. Possible combinations are: [1, 2, 2], [1, 4], [2, 3], and [5].

#### Approach
The problem can be approached using dynamic programming or recursion with memoization. The objective is to calculate the count of combinations by considering each coin in the set and tracking the possibilities to form the target sum while avoiding the repetition of using the same coin.

#### Input
The inputs to solve this problem include:
- An array of n distinct coins with varying denominations.
- A target value that needs to be achieved using the given coins.

#### Output
The output will be an integer representing the count of unique combinations in which the target value can be formed using the provided set of coins without using the same coin more than once.

#### Steps to Run
- Provide the array of coins and the target value as inputs.
- Execute the method/function designed to solve this problem.
- Retrieve the count of unique combinations to achieve the target value.

### File Structure
- `solution.py`: Contains the solution code.
- `test_solution.py`: Includes test cases to validate the solution.
- `README.md`: Provides details about the problem, approach, inputs, outputs, and instructions to run the code.

### References
Include any relevant research papers, articles, or online resources consulted while solving the problem. 

#### Note
This problem is a variation of the classic "coin change" problem, where the objective is to calculate the number of ways to make a particular value using a given set of coins with the constraint of not repeating the use of the same coin.

---

Feel free to adjust and expand upon this readme to better fit your project or repository requirements.