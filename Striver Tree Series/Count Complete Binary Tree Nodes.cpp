https://www.codingninjas.com/studio/problems/count-complete-binary-tree-nodes_982774?leftPanelTabValue=PROBLEM




#include <bits/stdc++.h> 
/************************************************************

Following is the Binary Tree node class
    
template <typename T = int>
class TreeNode
{
public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T val)
    {
        this->data = val;
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

************************************************************/

int countNodes(TreeNode<int> *root)
{
    //    Write your code here.
    if(!root)
        return 0;
    TreeNode<int>*temp = root;
    int a = 0,b = 0;
    while(temp){
        ++a;
        temp = temp->left;
    }
    temp = root;
    while(temp){
        ++b;
        temp = temp->right;
    }
    if(a == b){
        return pow(2,a) - 1;
    }
    return 1 + countNodes(root->left) + countNodes(root->right);

}