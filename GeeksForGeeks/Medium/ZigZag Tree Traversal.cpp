https://www.geeksforgeeks.org/problems/zigzag-tree-traversal/1




/*Structure of the node of the binary tree is as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	vector<int> v;
    	stack<Node *> s1, s2;
    	s1.push(root);
    	
    	while(!s1.empty() || !s2.empty()){
    	    while(!s1.empty()){
    	        Node* node = s1.top();
    	        v.push_back(node->data);
    	        s1.pop();
    	        if(node->left)
    	            s2.push(node->left);
    	        if(node->right)
    	            s2.push(node->right);
    	    }
    	    while(!s2.empty()){
    	        Node* node = s2.top();
    	        v.push_back(node->data);
    	        s2.pop();
    	        if(node->right)
    	            s1.push(node->right);
    	        if(node->left)
    	            s1.push(node->left);
    	    }
    	}
    	return v;
    }
};