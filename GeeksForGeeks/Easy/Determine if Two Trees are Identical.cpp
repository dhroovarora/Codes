https://www.geeksforgeeks.org/problems/determine-if-two-trees-are-identical/1




/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/


   
class Solution
{
    public:
    //Function to check if two trees are identical.
    bool isIdentical(Node *r1, Node *r2)
    {
        //Your Code here
        return (!r1 && !r2) ? 1 : (!r1 || !r2) ? 0 : (r1->data != r2->data) ? 0 : (isIdentical(r1->left,r2->left) && isIdentical(r1->right,r2->right));
    }
};