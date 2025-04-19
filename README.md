# Binary Tree Right Side View

This repository contains two different approaches to solve the **Right Side View of a Binary Tree** problem. The goal is to return the values of the nodes visible when the tree is viewed from the right side.

## Problem Statement

Given the `root` of a binary tree, imagine yourself standing on the right side of it. Return the values of the nodes you can see ordered from top to bottom.

## Example
```cpp
Input: [1,2,3,null,5,null,4]
Output: [1,3,4]
```

---

## Approaches

### 1. **BFS (Level Order Traversal)**

This approach uses a queue to perform a level-order traversal. For each level, the last node encountered is the rightmost node and hence part of the right side view.

#### Code Summary
- Traverse level by level using a queue.
- For each level, the last node processed is added to the result.

#### Time & Space Complexity
- **Time Complexity:** `O(N)` where `N` is the number of nodes in the tree.
- **Space Complexity:** `O(N)` for storing nodes in the queue and result vector.

### 2. **DFS (Depth First Search)**

This approach recursively visits the right subtree before the left subtree, ensuring the rightmost node is processed first for each level.

#### Code Summary
- Use a DFS helper function with parameters `node`, `level`, and result vector.
- If visiting a level for the first time, add the node's value to the result.
- Traverse right subtree first, then left.

#### Time & Space Complexity
- **Time Complexity:** `O(N)`
- **Space Complexity:** `O(H)`, where `H` is the height of the tree (due to recursive stack).

---

## Applications
- UI layout rendering from a perspective view
- Tree-based visibility computations in simulations or games
- Sensor/Camera field-of-view planning in robotics

## How to Run
1. Clone the repository
2. Compile using any C++ compiler
3. Create a binary tree and call `rightSideView(root)`

## License
This project is open-source and free to use.

