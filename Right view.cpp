/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    /**
     * Returns the right side view of a binary tree.
     * This approach performs a level-order traversal and records the last node of each level,
     * which is visible when viewing the tree from the right side.
     *
     * @param root Pointer to the root of the binary tree
     * @return A vector of integers representing the right side view
     */
    vector<int> rightSideView(TreeNode* root) {
        // If the root is null, the tree is empty; return an empty result.
        if (!root)
            return {};

        // Queue to perform level-order traversal, storing each node with its depth.
        queue<pair<TreeNode*, int>> q;
        q.push({root, 0});

        // Vector to hold the final right side view.
        vector<int> ans;

        // Start level-order traversal
        while (!q.empty()) {
            int n = q.size();         // Number of nodes at the current level
            TreeNode* hlo = NULL;     // Pointer to the rightmost node at this level

            // Process all nodes at the current level
            while (n--) {
                auto top = q.front(); // Current node and its depth
                q.pop();
                hlo = top.first;      // Keep track of the last node encountered in this level

                // Add left child if exists
                if (top.first->left) {
                    q.push({top.first->left, top.second + 1});
                }

                // Add right child if exists
                if (top.first->right) {
                    q.push({top.first->right, top.second + 1});
                }
            }

            // After processing all nodes at this level, hlo points to the rightmost node
            ans.push_back(hlo->val);
        }

        // Return the collected right side view nodes
        return ans;
    }
};
