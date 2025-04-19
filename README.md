# 199.-Binary-Tree-Right-Side-View
# Binary Tree Right Side View

This repository contains an implementation for the **Right Side View** of a binary tree. The right side view represents the set of nodes visible when the tree is viewed from the right side.

## Problem Statement

Given the root of a binary tree, return the values of the nodes you can see ordered from top to bottom when viewed from the right side.

### Example:
```cpp
Input: [1,2,3,null,5,null,4]

Output: [1,3,4]
```

## Approach

This solution uses a **Breadth-First Search (BFS)** traversal technique to perform a level-order traversal of the tree. At each level, it records the **last node encountered**, which represents the node visible from the right side.

### Key Steps:
1. **Check for empty tree**: Return an empty list if the root is null.
2. **Level-order traversal**:
   - Use a queue to traverse the tree level by level.
   - At each level, store the last node encountered.
3. **Store results**: Push the value of the last node at each level to the result list.
4. **Return** the accumulated list as the right side view.

## Code Summary
- `TreeNode` structure defines each node in the binary tree.
- `rightSideView(TreeNode* root)` is the main function implementing the logic.
- `queue<pair<TreeNode*, int>>` is used to maintain nodes along with their depth during traversal.

## Time and Space Complexity
- **Time Complexity**: `O(N)` where `N` is the number of nodes in the tree.
- **Space Complexity**: `O(N)` due to the queue used for BFS traversal and the result list.

## Applications
- Useful in visualizing trees or hierarchical structures.
- Applies in GUI rendering engines or scene graphs where rightmost visibility matters.
- Can be extended to solve variations like left side view or vertical order traversal.

