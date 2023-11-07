**Dynamic Programming**

Dynamic programming is an algorithmic technique used to solve problems by breaking them down into simpler subproblems. It stores the results of these subproblems so that they can be reused, thereby avoiding redundant computations. This approach is particularly useful for optimization problems, where the solution can be derived from optimal solutions to overlapping subproblems.

**Key Concepts:**

1. **Overlapping Subproblems:** Problems that can be broken down into smaller subproblems which are reused multiple times in the process of solving the larger problem.

2. **Optimal Substructure:** The optimal solution to the problem can be constructed from optimal solutions of its subproblems.

**Approach:**
**DP steps:**
```
step1-> definte the state
step2-> identify the recursive equations from the smaller sub problems
step3-> define the base case
```

1. **Top-Down (Memoization) /Recursive:** In this approach, the problem is solved by breaking it down into smaller subproblems and storing the results of each subproblem to avoid redundant calculations.
```
fun(n, a, b, c, ...) {
    1. handle base case
    2. if current state is already solved, return the result
    3. calculate the result from smaller sub-problems
}

```

2. **Bottom-Up (Tabulation)/Iterative:** Here, the problem is solved by iteratively calculating solutions to subproblems and storing them in a table to be used for solving larger subproblems.
```
main() {

    1. handle base case
    2. loop through the states:
        calculate the answer from smaller sub-problems
}
```

**Benefits:**

- **Efficiency:** Dynamic programming improves efficiency by avoiding redundant computations, reducing time complexity.
- **Optimization:** It helps find optimal solutions in a wide range of problems.

**Applications:**

- **Fibonacci sequence calculation**
- **Shortest path problems**
- **Optimization problems like knapsack, cutting rod, etc.**





Dynamic programming provides an elegant and efficient way to solve problems by breaking them down into simpler, overlapping subproblems and is widely used in various fields like computer science, economics, and mathematics.



