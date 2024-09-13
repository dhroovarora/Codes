https://www.geeksforgeeks.org/problems/mirror-tree/1




/* A binary tree node has data, pointer to left child
   and a pointer to right child /
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

class Solution {
  public:
    // Function to convert a binary tree into its mirror tree.
    void mirror(Node* node) {
        // code here
        if(node == NULL) return;
        swap(node->left, node->right);
        if(node->left) mirror(node->left);
        if(node->right) mirror(node->right);
    }
};