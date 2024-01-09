https://leetcode.com/problems/leaf-similar-trees/description/?envType=daily-question&envId=2024-01-09




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
    void get(TreeNode*root,vector<int> &a){
        if(!root->left && !root->right){
            a.push_back(root->val);
            return;
        }
        if(root->left)
            get(root->left,a);
        if(root->right)
            get(root->right,a);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> a,b;
        get(root1,a);
        get(root2,b);
        return (a == b);
    }
};