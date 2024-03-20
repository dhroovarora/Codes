https://www.geeksforgeeks.org/problems/sum-of-the-longest-bloodline-of-a-tree/1



/*
structure of the node of the binary tree is as
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/
class Solution
{
public:
    
    void solve(Node* root, int &ans, int level, int sum, int& maxLevel){
    //Base Case
    if(root==NULL) return;
    if(root->left == NULL && root->right == NULL){
        if(level >maxLevel){
        ans = sum+root->data;
        maxLevel = max(maxLevel, level);
        }
        else if(level == maxLevel){
            ans = max(ans, sum+root->data);
        }
        return ;
    }
    //Recursive Call
    sum = sum + root->data;
    solve(root->left, ans, level+1, sum, maxLevel);
    solve(root->right, ans, level+1, sum, maxLevel);
    
}
    
    int sumOfLongRootToLeafPath(Node *root)
    {
        //code here
        if(root == NULL) return 0;
        int ans = INT_MIN;
        int maxLevel = INT_MIN;
        solve(root, ans, 0, 0, maxLevel);
        return ans;
    }
};