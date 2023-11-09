### Coin Change (I)

#### Problem Statement

In a unique shop, there are \( n \) types of coins of values \( A_1, A_2, \ldots, A_n \). The quantities of these coins are denoted by \( C_1, C_2, \ldots, C_n \) respectively. The goal is to determine the number of ways to make the value \( K \) using the available coins.

For instance, suppose there are three coins of values 1, 2, and 5, with the limitation of using coin 1 at most 3 times, coin 2 at most 2 times, and coin 5 at most 1 time. If \( K = 5 \), the possible combinations are:

- \( (1, 1, 1, 2) \)
- \( (1, 2, 2) \)
- \( (5) \)

Thus, 5 can be formed in 3 different ways.

#### Input

The input starts with an integer \( T \) (\( \le 100 \)), indicating the number of test cases.

Each case begins with a line containing two integers \( n \) (\( 1 \le n \le 50 \)) and \( K \) (\( 1 \le K \le 1000 \)). The subsequent line contains \( 2n \) integers, representing \( A_1, A_2, \ldots, A_n, C_1, C_2, \ldots, C_n \) (\( 1 \le A_i \le 100, 1 \le C_i \le 20 \)). All \( A_i \) values will be distinct.

#### Output

For each case, print the case number and the number of ways \( K \) can be formed. The result might be large, so print the result modulo \( 100000007 \).

#### Sample

##### Input

```
2
3 5
1 2 5 3 2 1
4 20
1 2 3 4 8 4 2 1
```

##### Output

```
Case 1: 3
Case 2: 9
```

---

This problem is about finding the number of ways to achieve a target sum \( K \) using a specific set of coins with certain limitations on their usage. The solution requires a dynamic programming approach to count the possible combinations within the given constraints and compute the result modulo \( 100000007 \).