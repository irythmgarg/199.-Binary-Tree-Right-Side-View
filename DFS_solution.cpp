class Solution {
public:

    // Helper DFS function to traverse the tree
    void dfs(TreeNode* root, int level, vector<int>& ans)
    {
        if (!root)
            return;

        // If we are visiting this level for the first time, add the node's value
        if (level > ans.size())
            ans.push_back(root->val);

        // First visit right subtree to ensure rightmost node gets priority
        dfs(root->right, level + 1, ans);

        // Then visit left subtree
        dfs(root->left, level + 1, ans);
    }

    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        dfs(root, 1, ans); // Start DFS from root at level 1
        return ans;
    }
};
