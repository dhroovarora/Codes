https://www.geeksforgeeks.org/problems/root-to-leaf-paths/1




/*
Definition for Binary Tree Node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    vector<vector<int>> Paths(Node* root) {
        vector<vector<int>> a;
        vector<int> ans;
        solve(root,a,ans);
        return a;
    }
    void solve(Node* root,vector<vector<int>> &a,vector<int> &ans){
        if(root == NULL){
            return;
        }
        ans.push_back(root->data);
        if(root->left == NULL and root->right == NULL){
            a.push_back(ans);
        }
        solve(root->left,a,ans);
        solve(root->right,a,ans);
        ans.pop_back();
    }
};