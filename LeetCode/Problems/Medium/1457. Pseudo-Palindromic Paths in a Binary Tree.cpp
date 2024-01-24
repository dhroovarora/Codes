https://leetcode.com/problems/pseudo-palindromic-paths-in-a-binary-tree/description/?envType=daily-question&envId=2024-01-24




class Solution {
public:
    int pseudoPalindromicPaths(TreeNode* root) {
        return dfs(root, 0);
    }
private:
    int dfs(TreeNode* root, int pathBits) {
        if (!root)
            return 0;

        pathBits ^= (1 << root->val);

        if (root->left == NULL && root->right == NULL) {
            return ((pathBits & (pathBits - 1)) == 0) ? 1 : 0;
        }

        int leftCount = dfs(root->left, pathBits);
        int rightCount = dfs(root->right, pathBits);

        return leftCount + rightCount;
    }
};