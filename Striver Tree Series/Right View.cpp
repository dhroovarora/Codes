https://www.codingninjas.com/studio/problems/right-view_764605?leftPanelTabValue=PROBLEM




/*************************************************************
 
    Following is the Binary Tree node structure:

    template <typename T>

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;
        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/
void helper(BinaryTreeNode<int>*root,int a,vector<int> &ans){
    if(!root)
        return;
    if(a == ans.size())
        ans.push_back(root->data);
    helper(root->right,a+1,ans);
    helper(root->left,a+1,ans);
}
vector<int> printRightView(BinaryTreeNode<int>* root) {
    // Write your code here.
    vector<int> ans;
    helper(root,0,ans);
    return ans;
}