https://www.codingninjas.com/studio/problems/flatten-binary-tree-to-linked-list_1112615?leftPanelTabValue=PROBLEM




/************************************************************

    Following is the TreeNode class structure:

    template <typename T>
    class TreeNode
    {
    public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T dat)
        {
            this->data = dat;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

// void helper(TreeNode<int>*root,TreeNode<int>*&prev){
//     if(!root)
//         return;
//     helper(root->right,prev);
//     helper(root->left,prev);
//     root->right=prev;
//     root->left=NULL;
//     prev=root;
// }
// void flattenBinaryTree(TreeNode<int>* root)
// {
//     // Write your code here.
//     TreeNode<int>*prev=NULL;
//     helper(root,prev);
// }
#include<stack>
// void flattenBinaryTree(TreeNode<int>* root){
//     stack<TreeNode<int>*> s;
//     s.push(root);
//     while(!s.empty()){
//         TreeNode<int>* curr = s.top();
//         s.pop();
//         if(curr->right)
//             s.push(curr->right);
//         if(curr->left)
//             s.push(curr->left);
//         if(!s.empty())
//             curr->right = s.top();
//         curr->left = nullptr;
//     }
// }

void flattenBinaryTree(TreeNode<int>* root){
    TreeNode<int>* curr = root;
    while(curr){
        if(curr->left){
            TreeNode<int>*prev = curr->left;
            while(prev->right)
                prev = prev->right;
            prev->right = curr->right;
            curr->right = curr->left;
            curr->left = nullptr;
        }
        curr = curr->right;
    }
}