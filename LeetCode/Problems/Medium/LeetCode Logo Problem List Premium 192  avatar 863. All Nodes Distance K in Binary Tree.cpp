https://leetcode.com/problems/all-nodes-distance-k-in-binary-tree/description/




/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
vector<TreeNode*> help;
bool helper(TreeNode *root,TreeNode* target){
    if(!root)
        return 0;
    if(root == target || helper(root->left,target) || helper(root->right,target)){
        help.push_back(root);
        return 1;
    }
    return 0;
}
void helper2(vector<int> &ans,TreeNode *root,int k,TreeNode *blocker){
    if(!root || k < 0 || (blocker != NULL && root == blocker))
        return;
    if(k==0){
        ans.push_back(root->val);
    }
    helper2(ans,root->left,k-1,blocker);
    helper2(ans,root->right,k-1,blocker);
}
vector<int> distanceK(TreeNode *root, TreeNode* target, int k)
{
	//    Write your code here
    helper(root,target);
    vector<int> ans;
    for(int i=0;i<help.size();i++)
        helper2(ans,help[i],k-i,i==0 ? NULL :help[i-1]);
    return ans;
}
};