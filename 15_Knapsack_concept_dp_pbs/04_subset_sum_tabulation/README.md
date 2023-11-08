## Problem Definition - Subset Sum

Given an array of non-negative integers and a target value 'sum', the task is to determine whether there exists a subset within the given set whose elements sum up to the provided 'sum'.

### Example:

#### Input:
```
N = 6
arr[] = {3, 34, 4, 12, 5, 2}
sum = 9
```

#### Output:
```
1
```

#### Explanation:
For the given input, a subset with a sum of 9 exists: 4 + 3 + 2 = 9.

### Example:

#### Input:
```
N = 6
arr[] = {3, 34, 4, 12, 5, 2}
sum = 30
```

#### Output:
```
0
```

#### Explanation:
For the given input, no subset sums up to 30.

### Task

Your task is to implement the function `isSubsetSum()`, which takes an array `arr[]`, its size `N`, and an integer `sum` as input parameters and returns a boolean value (`true` if there exists a subset with the given sum, `false` otherwise). The driver code will print `1` if the returned value is `true`, and `0` if the returned value is `false`.

### Constraints

- 1 <= N <= 100
- 1 <= arr[i] <= 100
- 1 <= sum <= 104

### Expected Complexity

- Time Complexity: O(sum * N)
- Auxiliary Space: O(sum * N)