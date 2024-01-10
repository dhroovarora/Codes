https://www.codingninjas.com/studio/problems/tree-symmetricity_630426?leftPanelTabValue=PROBLEM




/*****************************************************

    Following is the Binary Tree node structure:
    
    class BinaryTreeNode {
        public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
        
        ~BinaryTreeNode() {
            if(left) 
                delete left;
            if(right) 
                delete right;
        }
    };

******************************************************/
bool check(BinaryTreeNode<int>* left,BinaryTreeNode<int>* right){
    if(!left || !right)
        return (left == right);
    if(left->data != right->data)
        return 0;
    return check(left->left,right->right) && check(left->right,right->left);
}

bool isSymmetric(BinaryTreeNode<int>* root)
{
    // Write your code here.
    return !root || check(root->left,root->right);
}