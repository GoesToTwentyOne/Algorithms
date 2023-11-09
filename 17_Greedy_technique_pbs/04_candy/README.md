### Problem Definition: Candy Distribution

There are \(n\) children standing in a line, each assigned a rating value provided in the integer array `ratings`.

The task is to distribute candies to these children while adhering to the following requirements:

1. Each child must receive at least one candy.
2. Children with a higher rating should receive more candies than their neighbors.

Return the minimum number of candies required to distribute among the children, following the specified conditions.

#### Example

**Input:**
```plaintext
ratings = [1, 0, 2]
```

**Output:**
```plaintext
5
```

**Explanation:** You can allocate 2, 1, and 2 candies to the first, second, and third child, respectively.

---

**Input:**
```plaintext
ratings = [1, 2, 2]
```

**Output:**
```plaintext
4
```

**Explanation:** You can allocate 1, 2, and 1 candies to the first, second, and third child, respectively. The third child receives 1 candy, satisfying the conditions.

#### Constraints

- \(n\) (length of `ratings`) falls within the range \(1 \leq n \leq 2 \times 10^4\).
- The values within `ratings` array satisfy the condition \(0 \leq ratings[i] \leq 2 \times 10^4\).

