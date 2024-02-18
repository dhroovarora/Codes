https://www.geeksforgeeks.org/problems/sum-of-leaf-nodes-in-bst/1




/* The structure of Node
struct Node{
    int data;
    Node *left,*right;
}; */


class Solution
{
    public:
        /*You are required to complete below method */
        int sumOfLeafNodes(Node *root ){
             /*Your code here */
             if(!root)
                return 0;
             if (!root->right and !root->left)
                return root->data;
             return sumOfLeafNodes(root->right)+sumOfLeafNodes(root->left );
        }
};