https://www.codingninjas.com/studio/problems/top-view-of-binary-tree_799401?leftPanelTabValue=PROBLEM&count=25&page=1&search=&sort_entity=order&sort_order=ASC




/************************************************************

    Following is the TreeNode class structure:

    template <typename T>
    class TreeNode
    {
    public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T dat)
        {
            this->data = dat;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
#include<map>
vector<int> getTopView(TreeNode<int> *root)
{
    // Write your code here.
    map<int,int> m;
    queue<pair<TreeNode<int>*,int>> q;
    q.push({root, 0});
    while(!q.empty()){
        auto node = q.front();
        q.pop();
        int a = node.second;
        if(m.find(a) == m.end())
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