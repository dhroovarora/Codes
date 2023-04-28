https://www.codingninjas.com/codestudio/problems/postorder-traversal_3839614?topList=striver-sde-sheet-problems&leftPanelTab=0




#include <bits/stdc++.h> 
/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
void helper(vector<int> &ans,TreeNode*root){
    if(!root)
        return;
    helper(ans,root->left);
    helper(ans,root->right);
    ans.push_back(root->data);
}
vector<int> getPostOrderTraversal(TreeNode *root)
{
    // Write your code here
    vector<int> ans;
    helper(ans,root);
    return ans;
}