https://www.codingninjas.com/studio/problems/childrensumproperty_790723?leftPanelTabValue=PROBLEM




#include <bits/stdc++.h> 
/*************************************************************

    Following is the Binary Tree node structure

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode < T > *left;
        BinaryTreeNode < T > *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/

void changeTree(BinaryTreeNode < int > * root) {
    // Write your code here.
    if(!root)
        return;
    int temp =0;
    if(root->left)
        temp += root->left->data;
    if(root->right)
        temp += root->right->data;
    if(temp < root->data){
        if(root->left)
            root->left->data = root->data;
        if(root->right)
            root->right->data = root->data;
    }
    changeTree(root->left);
    changeTree(root->right);
    int ans = 0;
    if(root->left)
        ans += root->left->data;
    if(root->right)
        ans += root->right->data;
    if(root->left || root->right)
        root->data = ans;
}