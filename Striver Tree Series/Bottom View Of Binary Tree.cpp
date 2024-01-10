https://www.codingninjas.com/studio/problems/bottom-view-of-binary-tree_893110?leftPanelTabValue=PROBLEM




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
#include<map>
vector<int> bottomView(TreeNode<int> * root){
    // Write your code here.
    map<int,int> m;
    queue<pair<TreeNode<int>*,int>> q;
    q.push({root, 0});
    while(!q.empty()){
        auto node = q.front();
        q.pop();
        int a = node.second;
        m[a] = node.first->data;
        if(node.first->left)
          q.push({node.first->left,a-1});
        if(node.first->right)
          q.push({node.first->right,a+1});
    }
    vector<int> ans;
    for(auto it : m)
        ans.push_back(it.second);
    return ans;
}