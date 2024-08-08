https://www.geeksforgeeks.org/problems/sum-tree/1




/*  Tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

// Should return true if tree is Sum Tree, else false
class Solution {
  public:
    bool f=true;
    int fun(Node* root){
        if(root==nullptr)
            return 0;
        int a=fun(root->left);
        int b=fun(root->right);
        if(root->data!=(a+b) && (root->left!=nullptr || root->right!=nullptr))
            f=false;
        return a+b+root->data;
    }
  public:
    bool isSumTree(Node* root) {
        // Your code here
        int a=fun(root);
        return f;
    }
};