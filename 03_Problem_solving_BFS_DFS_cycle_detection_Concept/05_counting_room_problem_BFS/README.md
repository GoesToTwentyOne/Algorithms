## Room Counting in a Building Map

**Problem Statement:**

You are given a map of a building, and your task is to count the number of rooms within it. The building's map is represented as an n×m grid, where each square is either a floor (.) or a wall (#). You have the freedom to move left, right, up, and down through the floor squares.

**Input:**

The first input line contains two integers, n and m, representing the height and width of the building's map.

Following this, there are n lines, each containing m characters describing the map. Each character is either a period (.) to denote a floor or a hash (#) to represent a wall.

**Output:**

Output a single integer, indicating the total number of rooms in the building.

**Constraints:**

- 1 ≤ n, m ≤ 1000

**Example:**

*Input:*

```
5 8
########
#..#...#
####.#.#
#..#...#
########
```

*Output:*

```
3
```

In this example, there are three rooms in the building, as represented by the floor squares in the map.