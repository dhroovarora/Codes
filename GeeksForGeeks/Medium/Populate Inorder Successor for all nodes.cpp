https://www.geeksforgeeks.org/problems/populate-inorder-successor-for-all-nodes/1




/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    struct Node *next;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node* prev = NULL;
    void populateNext(Node *root) {
        // code here
        if(!root)
            return;
        populateNext(root->left);
        if(prev)
            prev->next = root;
        prev = root;
        populateNext(root->right);
    }
};