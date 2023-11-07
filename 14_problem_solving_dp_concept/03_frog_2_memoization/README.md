## Problem Definition

### B - Frog 2

There are **N** stones, numbered from **1** to **N**. Each stone **i** (where **1 ≤ i ≤ N**) has a certain height, denoted as **h<sub>i</sub>**.

A frog is situated initially on Stone **1**. It needs to jump to Stone **N** following these rules:

- From Stone **i**, the frog can jump to any of the stones from **i+1** to **i+K**.
- The cost of the jump from Stone **i** to Stone **j** is the absolute difference in height: **|h<sub>i</sub> - h<sub>j</sub>|**.

The task is to find the minimum total cost the frog incurs to reach Stone **N**.

### Constraints

- All values in the input are integers.
- **2 ≤ N ≤ 10<sup>5</sup>**
- **1 ≤ K ≤ 100**
- **1 ≤ h<sub>i</sub> ≤ 10<sup>4</sup>**

### Input

The input is provided in the following format:
```
N K
h<sub>1</sub> h<sub>2</sub> ... h<sub>N</sub>
```

### Output

The output should be the minimum possible total cost incurred.

### Examples

#### Sample Input 1
```
5 3
10 30 40 50 20
```

#### Sample Output 1
```
30
```
Explanation:
Following the path **1 → 2 → 5**, the total cost incurred is **|10 - 30| + |30 - 20| = 30**.

#### Sample Input 2
```
3 1
10 20 10
```

#### Sample Output 2
```
20
```
Explanation:
Following the path **1 → 2 → 3**, the total cost incurred is **|10 - 20| + |20 - 10| = 20**.

#### Sample Input 3
```
2 100
10 10
```

#### Sample Output 3
```
0
```
Explanation:
Following the path **1 → 2**, the total cost incurred is **|10 - 10| = 0**.

#### Sample Input 4
```
10 4
40 10 20 70 80 10 20 70 80 60
```

#### Sample Output 4
```
40
```
Explanation:
Following the path **1 → 4 → 8 → 10**, the total cost incurred is **|40 - 70| + |70 - 70| + |70 - 60| = 40**.