edges = [1, 2, 0, 0]

        # Create a dictionary to store the parent nodes.
hm = {}
for i in range(len(edges)):
    hm[i] = edges[i]

# Create a memoization table to store the number of visited nodes in each subtree.
memo = [-1] * len(edges)

# Define a recursive function to count the number of visited nodes in a subtree.
def dfs(node, vis, memo):
    

    # If the node has already been visited, return the number of visited nodes in the subtree rooted at that node.
    if vis[node]:
        return memo[node]

    # Mark the node as visited.
    vis[node] = True

    # Get the parent node of the current node.
    parent = hm[node]

    # If the parent node is 0, then the current node is the root node.
    # In this case, the number of visited nodes in the subtree rooted at the current node is simply 1.
    if parent == 0:
        num_visited_nodes = 1
    else:
        # Recursively count the number of visited nodes in the subtree rooted at the parent node.
        num_visited_nodes = dfs(parent, vis, memo) + 1

    # Store the number of visited nodes in the memoization table.
    memo[node] = num_visited_nodes

    # Mark the node as unvisited.
    vis[node] = False

    # Return the number of visited nodes in the subtree rooted at the current node.
    return num_visited_nodes

# Count the number of visited nodes in each subtree.
result = []
for i in range(len(edges)):
    if memo[i] == -1:
        vis = [False] * len(edges)
        num_visited_nodes = dfs(i, vis, memo)
        result.append(num_visited_nodes)

print(result)
