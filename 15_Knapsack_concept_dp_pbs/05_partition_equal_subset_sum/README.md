### Problem Definition: Partition Equal Subset Sum

The problem aims to determine whether it's possible to partition a given integer array into two subsets in a way that the sum of elements in both subsets is equal. The task is to create a function that returns `true` if such partitioning is possible, and `false` otherwise.

#### Input
An array of integers `nums` is provided as input.

#### Output
Return `true` if it's possible to partition the array into two subsets with equal sums. Otherwise, return `false`.

### Examples

#### Example 1:
```plaintext
Input: nums = [1, 5, 11, 5]
Output: true
Explanation: The array can be partitioned as [1, 5, 5] and [11].
```

#### Example 2:
```plaintext
Input: nums = [1, 2, 3, 5]
Output: false
Explanation: The array cannot be partitioned into equal sum subsets.
```

### Constraints
- The length of the `nums` array will be between 1 and 200.
- The integers within the `nums` array will be between 1 and 100.

The goal is to design an algorithm or function to solve this problem efficiently, considering the constraints and providing a solution that determines if the given array can be partitioned into two subsets with equal sums.