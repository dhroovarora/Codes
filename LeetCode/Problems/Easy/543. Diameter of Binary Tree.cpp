https://leetcode.com/problems/diameter-of-binary-tree/description/?envType=daily-question&envId=2024-02-27




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
private:
    int helper(TreeNode* node,int& ans){
        if(!node)
            return 0;
        int left = helper(node->left,ans);
        int right = helper(node->right,ans);
        ans = max(ans,left+right);
        return max(left,right)+1;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int ans = 0;
        helper(root,ans);
        return ans;
    }
};