Problem Statement:

You are tasked with counting the number of rooms within a building's map. The map is represented as an n×m grid, where each square is either a floor (.) or a wall (#). You can navigate through the floor squares by moving left, right, up, or down.

Input:

The first line of input contains two integers, n and m, representing the height and width of the map.
Following this, there are n lines, each containing m characters describing the map. Each character is either a period (.) to denote a floor or a hash (#) to represent a wall.

Output:

Output a single integer, indicating the total number of rooms in the building.

Constraints:

1 ≤ n, m ≤ 1000

Example:

Input:

5 8
########
#..#...#
####.#.#
#..#...#
########

Output:

3

Explanation:

In the provided example, there are three rooms in the building as shown by the layout of the floor squares.