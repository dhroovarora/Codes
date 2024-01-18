https://www.codingninjas.com/studio/problems/construct-binary-tree-from-inorder-and-postorder-traversal_1266106?leftPanelTabValue=PROBLEM




/************************************************************
   
   Following is the TreeNode class structure
   
   class TreeNode<T>
   { 
   public:
        T data; 
        TreeNode<T> *left;
        TreeNode<T> *right;
   
        TreeNode(T data) 
  		{ 
            this -> data = data; 
            left = NULL; 
            right = NULL; 
        }
   };
   
   
 ************************************************************/
 
TreeNode<int>* helper(vector<int>&postOrder,int postStart,int postEnd,vector<int>&inOrder,int inStart,int inEnd,unordered_map<int,int> &m){
     if(postStart > postEnd || inStart > inEnd)
          return nullptr;
     TreeNode<int>* root = new TreeNode(postOrder[postEnd]);
     int inRoot = m[root->data];
     int numleft = inRoot - inStart;
     root->left = helper(postOrder,postStart,postStart+numleft-1,inOrder,inStart,inRoot-1,m);
     root->right = helper(postOrder,postStart+numleft,postEnd-1,inOrder,inRoot+1,inEnd,m);
     return root;
}

TreeNode<int>* getTreeFromPostorderAndInorder(vector<int>& postOrder, vector<int>& inOrder){
	// Write your code here.
     unordered_map<int,int> m;
     for(int i=0;i<inOrder.size();++i)
          m[inOrder[i]] = i;
     return helper(postOrder,0,postOrder.size()-1,inOrder,0,inOrder.size()-1,m);
}