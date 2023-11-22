https://www.geeksforgeeks.org/problems/symmetric-tree/1




/*
Structure of the node of the tree is as
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
class Solution{
    public:
    // return true/false denoting whether the tree is Symmetric or not
    bool isEqual(struct Node*root1,struct Node*root2){
        return (!root1 && !root2) ? 1 : (!root1 || !root2) ? 0 : (root1->data != root2->data) ? 0 : (isEqual(root1->right,root2->left) && isEqual(root1->left,root2->right));
    }
    bool isSymmetric(struct Node* root)
    {
	    // Code here
	    return (!root) ? 1 : isEqual(root->left,root->right);
    }
};