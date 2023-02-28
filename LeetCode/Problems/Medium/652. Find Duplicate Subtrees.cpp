https://leetcode.com/problems/find-duplicate-subtrees/description/




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
    string helper(TreeNode* root,vector<TreeNode*>& ans,unordered_map<string,int>& m){

        if(!root)
            return "";
        
        string s = to_string(root->val) + '#' + helper(root->left,ans,m) + '#' + helper(root->right,ans,m);

        m[s]++;
        if(m[s] == 2)
            ans.push_back(root);
        return s;
    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        unordered_map<string,int> m;
        vector<TreeNode*> ans;

        helper(root,ans,m);
        return ans;
    }
};