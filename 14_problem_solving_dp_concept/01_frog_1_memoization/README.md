### Problem Description

#### Frog Leaping Stones

The goal is to assist a frog located at Stone 1 in reaching Stone N, by either jumping to Stone i+1 or i+2, while incurring a cost based on the height difference between the stones. Each stone, numbered from 1 to N, has a specific height represented by hᵢ.

**Given:**
- Number of stones, N, and their respective heights hᵢ (1 ≤ i ≤ N).

**Frog's Movement Rules:**
- The frog, starting at Stone 1, can leap to Stone i+1 or i+2.
- The cost incurred is determined by the absolute difference in height between the stones.

**Task:**
Calculate the minimum total cost incurred by the frog before reaching Stone N.

#### Constraints
- All input values are integers.
- 2 ≤ N ≤ 10^5
- 1 ≤ hᵢ ≤ 10^4

#### Input Format
The input is provided in the following format:

```
N
h₁ h₂ ... hₙ
```

#### Output Format
Display the minimum possible total cost incurred.

### Example

**Sample Input 1**
```
4
10 30 40 20
```

**Sample Output 1**
```
30
```
Explanation:
By following the path 1 → 2 → 4, the total cost incurred would be |10 - 30| + |30 - 20| = 30.

**Sample Input 2**
```
2
10 10
```

**Sample Output 2**
```
0
```
Explanation:
By following the path 1 → 2, the total cost incurred would be |10 - 10| = 0.

**Sample Input 3**
```
6
30 10 60 10 60 50
```

**Sample Output 3**
```
40
```
Explanation:
By following the path 1 → 3 → 5 → 6, the total cost incurred would be |30 - 60| + |60 - 60| + |60 - 50| = 40.