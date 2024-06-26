https://www.geeksforgeeks.org/problems/closest-neighbor-in-bst/1




/*
//Structure of the Node of the BST is as
struct Node {
    int key;
    Node* left, *right;
};


   'N' is the element
   'size' is the total element in BST
  */

 
class Solution {
public:
    int findMaxForN(Node* root, int n) {
        if (root == nullptr) {
            return -1;
        }
        if (root->key > n) {
            return findMaxForN(root->left, n); // Corrected to return the result of the recursive call
        }
        int maxVal = findMaxForN(root->right, n); // Corrected to store the result of the recursive call
        if (maxVal != -1) {
            return maxVal;
        }
        return root->key;
    }
};