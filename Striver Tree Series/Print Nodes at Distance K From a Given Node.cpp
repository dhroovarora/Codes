https://www.codingninjas.com/studio/problems/print-nodes-at-distance-k-from-a-given-node_842560?leftPanelTabValue=PROBLEM




/*************************************************************

    Following is the Binary Tree node structure for reference:

    class BinaryTreeNode{
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

vector<BinaryTreeNode<int>*> printNodesAtDistanceK(BinaryTreeNode<int>* root, BinaryTreeNode<int>* target, int K) {
    // Write your code here.
    unordered_map<BinaryTreeNode<int>*,BinaryTreeNode<int>*> parent;
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    parent[root] = NULL;
    while(!q.empty()){
        auto it = q.front();
        q.pop();
        if (it->left) {
            parent[it->left] = it;
            q.push(it->left);
        }
        if (it->right) {
            parent[it->right] = it;
            q.push(it->right);
        }
    }
    vector<BinaryTreeNode<int>*> ans;
    unordered_set<BinaryTreeNode<int>*> visited;
    q.push(target);
    visited.insert(target);
    while(K--){
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
    }
    while(!q.empty()){
        ans.push_back(q.front());
        q.pop();
    }
    return ans;
}