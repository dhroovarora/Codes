https://www.codingninjas.com/studio/problems/construct-a-binary-tree-from-preorder-and-inorder-traversal_920539?leftPanelTabValue=PROBLEM




/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

TreeNode<int>* helper(vector<int> &preorder,int preStart,int preEnd,vector<int>& inorder,int inStart,int inEnd,unordered_map<int,int> &m){
    if(preStart > preEnd || inStart > inEnd)
        return nullptr;
    TreeNode<int>* root = new TreeNode(preorder[preStart]);

    int inRoot = m[root->data];
    int numleft = inRoot - inStart;
    root->left = helper(preorder,preStart+1,preStart+numleft,inorder,inStart,inRoot-1,m);
    root->right = helper(preorder,preStart+numleft+1,preEnd,inorder,inRoot+1,inEnd,m);
    return root;
}

TreeNode<int> *buildBinaryTree(vector<int> &inorder, vector<int> &preorder)
{
	//    Write your code here
    unordered_map<int,int> m;
    for(int i=0;i<inorder.size();++i)
        m[inorder[i]] = i;
    return helper(preorder,0,preorder.size() - 1,inorder,0,inorder.size()-1,m);

}