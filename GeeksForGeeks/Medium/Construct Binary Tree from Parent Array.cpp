https://www.geeksforgeeks.org/problems/construct-binary-tree-from-parent-array/1




/* node structure  used in the program

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

class Solution {
  public:
    // Function to construct binary tree from parent array.
    void dfs(Node* &root, unordered_map<int, pair<int, int> >& mp) {
        
        if(mp.find(root->data) != mp.end()) {
            root->left = new Node(mp[root->data].first);
            dfs(root->left, mp);
            if(mp[root->data].second != -1) {
                root->right = new Node(mp[root->data].second);
                dfs(root->right, mp);
            }
        }
    }
    Node *createTree(vector<int> parent) {
        // Your code here.
        int i = 0;
        for(; i < parent.size(); i++) {
            if(parent[i] == -1) break;
        }
        Node* root = new Node(i);
        unordered_map<int, pair<int, int> >mp;
        for(int i=0; i < parent.size(); i++) {
            if(parent[i] == -1) continue;
            if(mp.find(parent[i]) != mp.end()) {
                mp[parent[i]].second = i;
            } else {
                mp[parent[i]].first = i;
                mp[parent[i]].second = -1;
            }
        }
        dfs(root, mp);
        return root;
    }
};