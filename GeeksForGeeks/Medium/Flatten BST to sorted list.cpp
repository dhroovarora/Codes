https://www.geeksforgeeks.org/problems/flatten-bst-to-sorted-list--111950/1




/* Node of the binary search tree 
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution
{
public:
    void dfs(Node*root, vector<int> &vec) {
        if(root == NULL) return;
        
        dfs(root->left, vec);
        vec.push_back(root->data);
        dfs(root->right, vec);
        return;
    }
    
    Node *flattenBST(Node *root)
    {
        vector<int>vec;
        dfs(root, vec);
        Node*temp = new Node(vec[0]);
        Node*head = temp;
        for(int ele : vec){
            
            temp->right = new Node(ele);
            temp = temp->right;
        }
        
        temp = NULL;
        return head->right;
    }
};