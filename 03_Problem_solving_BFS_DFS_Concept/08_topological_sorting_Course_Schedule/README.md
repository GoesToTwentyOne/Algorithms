# Course Order Finder

This program helps you find an order in which you can complete a set of courses with certain prerequisites.

## Input

The program takes the following input:

- Two integers, `n` and `m`, where `n` is the number of courses and `m` is the number of requirements.
- The courses are numbered from 1 to `n`.
- `m` lines describing the requirements. Each line contains two integers, `a` and `b`, indicating that course `a` must be completed before course `b`.

## Output

The program will provide an order in which you can complete the courses. It can provide any valid order that includes all the courses. If there are no solutions, it will print "IMPOSSIBLE."

## Constraints

- 1 ≤ `n` ≤ 10^5
- 1 ≤ `m` ≤ 2 * 10^5
- 1 ≤ `a`, `b` ≤ `n`

## Example

### Input:

```
5 3
1 2
3 1
4 5
```

### Output:

```
3 4 1 5 2
```