https://www.geeksforgeeks.org/problems/min-distance-between-two-given-nodes-of-a-binary-tree/1




class Solution{
    public:
    /* Should return minimum distance between a and b
    in a tree with given root*/
     Node* lca(Node* root, int a, int b) {
        if (!root)
            return NULL;
            
        if (root->data == a || root->data == b)
            return root;
        
        Node* left = lca(root->left, a, b);
        Node* right = lca(root->right, a, b);
        
        if (left && right)
            return root;
            
        return (left) ? left : right;
    }

    int find(Node* root, int node, int dist) {
        if (!root)
            return -1;
            
        if (root->data == node)
            return dist;
            
        int left = find(root->left, node, dist + 1);
        
        if (left != -1)
            return left;
            
        return find(root->right, node, dist + 1);
    }
    int findDist(Node* root, int a, int b) {
        // Your code here
        Node* n1 = lca(root, a, b);
        int d1 = find(n1, a, 0);
        int d2 = find(n1, b, 0);
        return d1 + d2;
    }
};