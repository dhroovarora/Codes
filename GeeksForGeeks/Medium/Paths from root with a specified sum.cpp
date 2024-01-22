https://www.geeksforgeeks.org/problems/paths-from-root-with-a-specified-sum/1




/*// A Tree node
struct Node
{
	int key;
	struct Node *left, *right;
};*/

class Solution
{
    public:
    void helper(Node* root,int sum,vector<vector<int>> &ans,vector<int> temp){
        if(!root)
            return;
        temp.push_back(root->key);
        if(sum - root->key == 0)
            ans.push_back(temp);
        helper(root->left,sum - root->key,ans,temp);
        helper(root->right,sum - root->key,ans,temp);
        temp.pop_back();
    }
    vector<vector<int>> printPaths(Node *root, int sum)
    {
        //code here
        vector<vector<int>> ans;
        vector<int> temp;
        helper(root,sum,ans,temp);
        return ans;
    }
};