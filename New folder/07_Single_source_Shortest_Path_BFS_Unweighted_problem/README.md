
## Single Source Shortest Path (SSSP) algorithm
* Single Source Shortest Path (SSSP) algorithm is a graph algorithm that finds the shortest path from a source node to all other nodes in a graph. In the case of an unweighted graph, where all edges have the same weight, the algorithm can be implemented using a Breadth-First Search (BFS) approach.

* The algorithm starts from the source node and explores all its neighboring nodes. Then, it moves to the next level of nodes and explores their neighbors until all nodes have been visited. During the process, the algorithm keeps track of the distance from the source node to each visited node.

* The SSSP algorithm on an unweighted graph can be implemented using a queue data structure, where nodes are added to the queue as they are discovered and processed in a First-In-First-Out (FIFO) manner. This ensures that the algorithm processes nodes in the order of their distance from the source node.

* The algorithm terminates when all nodes have been visited and their distances from the source node have been calculated. The output of the algorithm is a dictionary that maps each node in the graph to its shortest distance from the source node.

* The SSSP algorithm on an unweighted graph has a time complexity of O(V+E), where V is the number of nodes and E is the number of edges in the graph. This is because each node and edge in the graph is visited at most once during the algorithm.
