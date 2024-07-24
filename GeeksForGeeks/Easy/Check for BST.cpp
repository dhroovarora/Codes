https://www.geeksforgeeks.org/problems/check-for-bst/1




class Solution {
  public:
    // Function to check whether a Binary Tree is BST or not.
     bool isvalid(Node* root, int a ,int b){
        if(root==NULL)
            return true;
        
        if(root->data <=a || root->data >=b)
            return false;
        
        return isvalid(root->left,a,root->data) && isvalid(root->right,root->data,b);
    }
    bool isBST(Node* root) {
        // Your code here
        return isvalid(root,INT_MIN,INT_MAX);
    }
};