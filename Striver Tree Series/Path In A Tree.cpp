https://www.codingninjas.com/studio/problems/path-in-a-tree_3843990?leftPanelTabValue=PROBLEM




#include <bits/stdc++.h> 
/*   
    template <typename T = int>
	class TreeNode
	{
		public:
		T data;
		TreeNode<T> *left;
		TreeNode<T> *right;

		TreeNode(T data)
		{
			this->data = data;
			left = NULL;
			right = NULL;
		}

		~TreeNode()
		{
			if (left != NULL)
			{
		  		delete left;
			}
			if (right != NULL)
			{
			 	delete right;
			}
		}
	};
*/
bool helper(TreeNode<int> *root, int x, vector<int> &ans) {
  	if (!root)
    	return 0;
  	ans.push_back(root->data);
  	if (root->data == x)
    	return 1;
    if(helper(root->left,x,ans) || helper(root->right, x, ans))
        return 1;
	ans.pop_back();
	return 0;	
}

vector<int> pathInATree(TreeNode<int> *root, int x)
{
    // Write your code here.
	vector<int> ans;
	if(!root)
		return ans;
	helper(root,x,ans);
	return ans;
}