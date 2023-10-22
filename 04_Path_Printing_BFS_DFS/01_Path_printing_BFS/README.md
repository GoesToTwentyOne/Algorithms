Certainly, here are the pseudocode snippets for printing paths using Depth-First Search (DFS) and Breadth-First Search (BFS):

### Depth-First Search (DFS):

```plaintext
function dfs_with_path(graph, start, target):
    stack = [(start, [start])]  # Stack contains a tuple with the current node and the path
    visited = set()

    while stack is not empty:
        node, path = pop(stack)
        add node to visited

        if node is the target:
            print "Path found:", path
            break

        for each neighbor in graph[node]:
            if neighbor is not in visited:
                push (neighbor, path + [neighbor]) onto stack
```

### Breadth-First Search (BFS):

```plaintext
function bfs_with_path(graph, start, target):
    queue = queue containing (start, [start])  # Queue contains a tuple with the current node and the path
    visited = set()

    while queue is not empty:
        node, path = dequeue from queue
        add node to visited

        if node is the target:
            print "Path found:", path
            break

        for each neighbor in graph[node]:
            if neighbor is not in visited:
                enqueue (neighbor, path + [neighbor]) into queue
```

These pseudocode snippets outline the steps for printing paths using DFS and BFS in a clear and concise manner. You can adapt and implement them in your preferred programming language as needed.