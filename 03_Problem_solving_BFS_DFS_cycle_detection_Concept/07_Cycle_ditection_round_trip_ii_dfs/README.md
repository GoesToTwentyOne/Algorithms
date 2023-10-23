## Byteland Round Trip Design

Byteland has a network of cities and flight connections. Your task is to design a round trip that starts in a city, goes through one or more other cities, and eventually returns to the initial city. Each intermediate city on the route must be distinct.

### Input

The first line of input contains two integers, `n` and `m`, which represent the number of cities and flight connections. The cities are numbered from 1 to `n`.

Following that, there are `m` lines describing the flight connections. Each line contains two integers, `a` and `b`, indicating a one-way flight connection from city `a` to city `b`.

### Output

1. First, print an integer `k`, which is the number of cities on the route.
2. Then, print `k` cities in the order they will be visited. You can print any valid solution.

If there are no valid solutions, print "IMPOSSIBLE."

### Constraints

- 1 ≤ `n` ≤ 10^5
- 1 ≤ `m` ≤ 2 * 10^5
- 1 ≤ `a`, `b` ≤ `n`

### Example

**Input:**

```
4 5
1 3
2 1
2 4
3 2
3 4
```

**Output:**

```
4
2 1 3 2
```

In this example, the round trip begins in city 2, goes through city 1, city 3, and city 2 again, returning to the starting city.