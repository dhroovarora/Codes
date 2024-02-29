https://leetcode.com/problems/even-odd-tree/description/




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
    bool isEvenOddTree(TreeNode* root) {
        int level = 0;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            int prev = level % 2 == 0 ? -1 : INT_MAX;
            int n = q.size();
            for (int i = n; i > 0; --i) {
                TreeNode* node = q.front();
                q.pop();
                if (level % 2 == 0){
                    if (node->val % 2 == 0 || node->val <= prev)
                        return 0;
                }
                else{
                    if (node->val % 2 == 1 || node->val >= prev)
                        return 0;
                }
                prev = node->val;
                if (node->left) 
                    q.push(node->left);
                if (node->right)
                    q.push(node->right);
            }
            ++level;
        }
        return 1;
    }
};