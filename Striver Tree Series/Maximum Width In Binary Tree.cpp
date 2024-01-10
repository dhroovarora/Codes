https://www.codingninjas.com/studio/problems/maximum-width-in-binary-tree_763671?leftPanelTabValue=PROBLEM




/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

int getMaxWidth(TreeNode<int> *root)
{
    // Write your code here.
    if(!root)
        return 0;
    long long ans = 1;
    queue<TreeNode<int> *> q;
    q.push(root);
    while(!q.empty()){
        long long size = q.size();
        for(int i=0;i<size;++i){
            auto it = q.front();
            q.pop();
            if(it->left)
                q.push(it->left);
            if(it->right)
                q.push(it->right);
        }
        size = q.size();
        ans = max(ans,size);
    }
    return ans;
}