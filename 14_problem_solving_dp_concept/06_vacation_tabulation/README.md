## Problem Definition

### C - Vacation

Taro is about to start his summer vacation, which spans **N** days. Each day, labeled from **1** to **N**, Taro must select one of the following activities to do:

- A: Swimming in the sea, which earns **a<sub>i</sub>** points of happiness.
- B: Bug catching in the mountains, which earns **b<sub>i</sub>** points of happiness.
- C: Homework at home, which earns **c<sub>i</sub>** points of happiness.

Taro easily gets bored and, therefore, cannot do the same activity for two or more consecutive days.

The task is to find the maximum possible total points of happiness that Taro can achieve.

### Constraints

- All input values are integers.
- **1 ≤ N ≤ 10<sup>5</sup>**
- **1 ≤ a<sub>i</sub>, b<sub>i</sub>, c<sub>i</sub> ≤ 10<sup>4</sup>**

### Input

The input is in the following format:
```
N
a<sub>1</sub> b<sub>1</sub> c<sub>1</sub>
a<sub>2</sub> b<sub>2</sub> c<sub>2</sub>
...
a<sub>N</sub> b<sub>N</sub> c<sub>N</sub>
```

### Output

The output should be the maximum possible total points of happiness that Taro gains.

### Examples

#### Sample Input 1
```
3
10 40 70
20 50 80
30 60 90
```

#### Sample Output 1
```
210
```

Explanation:
If Taro does activities in the order C, B, C, he will gain **70 + 50 + 90 = 210** points of happiness.

#### Sample Input 2
```
1
100 10 1
```

#### Sample Output 2
```
100
```

#### Sample Input 3
```
7
6 7 8
8 8 3
2 5 2
7 8 6
4 6 8
2 3 4
7 5 1
```

#### Sample Output 3
```
46
```

Explanation:
Taro should do activities in the order C, A, B, A, C, B, A to attain a total of **46** points of happiness.