### Knapsack Problem Definition

**Problem Statement**

Taro is faced with the task of selecting items among a collection of **N** items, each denoted by a number from 1 to N. Each item **i** possesses a specific weight **w_i** and value **v_i**. The goal is to determine the optimal selection of items that Taro can carry in a knapsack, with a maximum capacity of **W**. The objective is to maximize the total value of the items while ensuring that their total weight doesn't exceed the knapsack's capacity.

**Constraints**

- All values in the input are integers.
- 1 ≤ N ≤ 100
- 1 ≤ W ≤ 10^5
- 1 ≤ w_i ≤ W
- 1 ≤ v_i ≤ 10^9

**Input Format**

The input is provided through Standard Input in the following format:

```
N W
w1 v1
w2 v2
...
wN vN
```

**Output Format**

The output should present the maximum sum of values for the selected items that Taro can take home.

### Example

**Sample Input 1**
```
3 8
3 30
4 50
5 60
```

**Sample Output 1**
```
90
```

**Explanation:** Items 1 and 3 should be chosen, resulting in a total weight of 8 (3 + 5) and a total value of 90 (30 + 60).

**Sample Input 2**
```
5 5
1 1000000000
1 1000000000
1 1000000000
1 1000000000
1 1000000000
```

**Sample Output 2**
```
5000000000
```

**Sample Input 3**
```
6 15
6 5
5 6
6 4
6 6
3 5
7 2
```

**Sample Output 3**
```
17
```

**Explanation:** Items 2, 4, and 5 should be chosen, resulting in a total weight of 14 (5 + 6 + 3) and a total value of 17 (6 + 6 + 5).