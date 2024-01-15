https://www.codingninjas.com/studio/problems/time-to-burn-tree_630563?leftPanelTabValue=PROBLEM




/************************************************************

    Following is the Binary Tree node structure

    class BinaryTreeNode 
    {
        public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) 
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
#include<unordered_map>
#include<unordered_set>
int timeToBurnTree(BinaryTreeNode<int>* root, int start)
{
    // Write your code here
    unordered_map<BinaryTreeNode<int>*,BinaryTreeNode<int>*> parent;
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    parent[root] = NULL;
    BinaryTreeNode<int>*target;
    while(!q.empty()){
        auto it = q.front();
        q.pop();
        if(it->data == start)
            target = it;
        if (it->left) {
            parent[it->left] = it;
            q.push(it->left);
        }
        if (it->right) {
            parent[it->right] = it;
            q.push(it->right);
        }
    }
    unordered_set<BinaryTreeNode<int>*> visited;
    q.push(target);
    visited.insert(target);
    int ans = -1;
    while(!q.empty()){
        int size = q.size();
        for(int i=0;i<size;++i){
            auto it = q.front();
            q.pop();
            if(it->left && visited.find(it->left) == visited.end()){
                q.push(it->left);
                visited.insert(it->left);
            }
            if(it->right && visited.find(it->right) == visited.end()){
                q.push(it->right);
                visited.insert(it->right);
            }
            if (parent[it] && visited.find(parent[it]) == visited.end()) {
                q.push(parent[it]);
                visited.insert(parent[it]);
            }
        }
        ++ans;
    }
    return ans;
}