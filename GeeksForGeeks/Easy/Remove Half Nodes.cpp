https://www.geeksforgeeks.org/problems/remove-half-nodes/1




/*Complete the function below
Node is as follows:
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

// Return the root of the modified tree after removing all the half nodes.
class Solution {
  public:
    Node *helper(Node *root){
        if(!root)
            return NULL;
        
        root->left = helper(root->left);
        root->right = helper(root->right);
        
        if(!root->left && root->right)
            return root->right;
        if(!root->right && root->left)
            return root->left;
        return root;
    }
    Node *RemoveHalfNodes(Node *root) {
        // code here
        return helper(root);
    }
};