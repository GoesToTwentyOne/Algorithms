Problem Statement for Your Repository:

**Time limit:** 1.00 s  
**Memory limit:** 512 MB

In your repository, you have a group of **n** contributors, and they have established **m** connections with one another. Your goal is to organize the contributors into two teams in such a way that no two contributors on the same team have a connection. You have the flexibility to determine the team sizes.

**Input:**

The first line of input contains two integers, **n** and **m**, representing the number of contributors and connections, respectively. Each contributor is identified by a unique integer from 1 to **n**.

Following that, there are **m** lines that describe the connections between contributors. Each line consists of two integers, **a** and **b**, indicating that contributors **a** and **b** are connected. It is important to note that each connection involves two different contributors. There is at most one connection between any two contributors.

**Output:**

You should provide an example of how to assign contributors to the two teams. For each contributor, print "1" or "2" to indicate which team they belong to. You can choose any valid assignment of teams.

If it is not possible to create two teams with no connections within each team, print "IMPOSSIBLE."

**Constraints:**

- 1 ≤ **n** ≤ 10^5
- 1 ≤ **m** ≤ 2 * 10^5
- 1 ≤ **a**, **b** ≤ **n**

**Example:**

**Input:**

5 3  
1 2  
1 3  
4 5  

**Output:**

1 2 2 1 2