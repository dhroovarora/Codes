https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/description/




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
    void helper(TreeNode* root,map<int,map<int,multiset<int>>> &m,int a,int b){
        if(!root)
            return;
        m[a][b].insert(root->val);
        helper(root->left,m,a-1,b+1);
        helper(root->right,m,a+1,b+1);
    }
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>> m;
        queue<pair<TreeNode*,pair<int,int>>> q;
        q.push({root,{0,0}});
        while(!q.empty()){
            auto node = q.front();
            q.pop();
            int a = node.second.first , b = node.second.second;
            m[a][b].insert(node.first->val);
            if(node.first->left)
                q.push({node.first->left,{a-1,b+1}});
            if(node.first->right)
                q.push({node.first->right,{a+1,b+1}});
        }
        vector<vector<int>> ans;
        for(auto it : m){
            vector<int> v;
            for(auto i : it.second){
                v.insert(v.end(),i.second.begin(),i.second.end());
            }
            ans.push_back(v);
        }
        return ans;

        // map<int,map<int,multiset<int>>> m;
        // helper(root,m,0,0);
        // vector<vector<int>> ans;
        // for(auto it : m){
        //     vector<int> v;
        //     for(auto i : it.second){
        //         v.insert(v.end(),i.second.begin(),i.second.end());
        //     }
        //     ans.push_back(v);
        // }
        // return ans;
    }
};