https://leetcode.com/problems/minimum-absolute-difference-in-bst/description/




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
    int getMinimumDifference(TreeNode* root) {
        stack<TreeNode*> st;
        TreeNode* curr = root;
        int prevVal = INT_MAX;
        int minDiff = INT_MAX;
        
        while (!st.empty() || curr != nullptr) {
            while (curr != nullptr) {
                st.push(curr);
                curr = curr->left;
            }
            
            curr = st.top();
            st.pop();
            
            if (prevVal != INT_MAX) {
                minDiff = min(minDiff, abs(curr->val - prevVal));
            }
            
            prevVal = curr->val;
            curr = curr->right;
        }
        
        return minDiff;
    }
};