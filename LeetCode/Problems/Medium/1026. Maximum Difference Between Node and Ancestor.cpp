https://leetcode.com/problems/maximum-difference-between-node-and-ancestor/description/?envType=daily-question&envId=2024-01-11




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
    int ans = 0;
    pair<int,int> postOrder(TreeNode* root){
        if(!root) return {1e9, -1e9};

        auto left = postOrder(root->left);
        auto right = postOrder(root->right);

        int mini = min({root->val, left.first, right.first});
        int maxi = max({root->val, left.second, right.second});

        ans = max({ ans, abs(root->val-mini), abs(root->val-maxi) });

        return { mini, maxi };
    }

public:
    int maxAncestorDiff(TreeNode* root) {
        postOrder(root);
        return ans;
    }
};