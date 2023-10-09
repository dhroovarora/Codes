https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1




class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        // code here
        return (!node) ? 0 : 1 + max(height(node->left),height(node->right));
    }
};