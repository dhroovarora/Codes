https://www.geeksforgeeks.org/problems/tree-from-postorder-and-inorder/1




class Solution
{
    public:

    //Function to return a tree created from postorder and inoreder traversals.
    Node *buildTree(int in[], int post[], int n) {
        // Your code here
        unordered_map<int, int> val2in;
        for (int i = 0; i < n; i++) val2in[in[i]] = i;
        
        return build(in, post, n, val2in, n, 0, 0);
    }
    
    Node *build(int in[], int post[], int n, unordered_map<int, int>& val2in, int sz, int instart, int poststart) {
        if (sz == 0) return NULL;
        
        Node *node = new Node(post[poststart+sz-1]);
        if (sz == 1) return node;
        
        int rootpos_inorder = val2in[post[poststart+sz-1]];
        int lsz = rootpos_inorder-instart;
        int rsz = sz-lsz-1;
        
        node->left = build(in, post, n, val2in, lsz, instart, poststart);
        node->right = build(in, post, n, val2in, rsz, instart+lsz+1, poststart+lsz);
        return node;
    }
};