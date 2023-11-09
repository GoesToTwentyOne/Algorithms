### Greedy Technique

#### Definition
The Greedy Technique is an algorithmic paradigm that makes locally optimal choices at each step with the hope of finding a global optimum. It iteratively makes the best choice at each step without reconsidering previous choices. 

#### Complexity
The time complexity of a greedy algorithm is typically determined by the number of steps it takes to make the sequence of locally optimal choices. In general, greedy algorithms have varying time complexities, depending on the specific problem being solved. It can range from linear time to exponential time complexity, or even polynomial time in some cases.

#### Why Use Greedy Technique
- **Simplicity:** Greedy algorithms are often straightforward and easy to implement.
- **Efficiency:** They can be more efficient than other techniques in some cases.
- **Optimality:** While not always globally optimal, they provide reasonably good solutions and work well for a broad range of problems.
- **Applications:** Greedy techniques are applied in various domains such as algorithms, scheduling, networking, and more.

#### Examples of Problems Solved Using Greedy Technique
- **Minimum Spanning Tree (Prim's and Kruskal's algorithms)**
- **Dijkstra's Shortest Path Algorithm**
- **Activity Selection Problem**
- **Fractional Knapsack Problem**
- **Huffman Coding**

#### Limitations
- **Non-Optimal Solutions:** Greedy algorithms might not always yield the most optimal solution.
- **Dependence on Problem Structure:** The applicability of the greedy technique relies heavily on the problem structure. If the problem doesn't exhibit the greedy-choice property, the method might not work.
- **No Backtracking:** Greedy algorithms are prone to making decisions that cannot be undone.

#### Implementing Greedy Algorithms
When using greedy algorithms, the following steps are generally followed:
1. **Problem Formulation:** Clearly define the problem and identify its constraints and requirements.
2. **Greedy Choice Property:** Establish the optimal substructure by identifying the locally optimal choice at each step.
3. **Greedy-Choice:** Determine how to select the best choice at each step.
4. **Proof of Correctness:** Prove that the greedy strategy is safe and results in the optimal solution.

#### Additional Notes
- It's essential to verify the correctness of the greedy approach for each problem, as sometimes it may not always guarantee an optimal solution.
- Greedy algorithms are not applicable for problems that require a globally optimal solution if the problem doesn't exhibit the greedy-choice property.

### References
Include links and resources to further study greedy algorithms and specific problems solved using this technique.

#### Further Reading
- [GeeksforGeeks - Greedy Algorithms](https://www.geeksforgeeks.org/greedy-algorithms/)
- [Brilliant.org - Greedy Algorithms](https://brilliant.org/wiki/greedy-algorithm/)