https://www.geeksforgeeks.org/problems/ancestors-in-binary-tree/1




/*
Structure of a node is as following
struct Node
{
     int data;
     struct Node* left;
     struct Node* right;
};
*/

class Solution {
  public:
    // Function should return all the ancestor of the target node
     void inorder(struct Node *root,int target,vector<int> &ancestor,bool &flag)
    {
        if(root==NULL)
        {
            return;
        }
        if(root->data==target)
        {
            flag=true;
            return;
        }
        if(!flag)
        inorder(root->left,target,ancestor,flag);
        if(!flag)
        inorder(root->right,target,ancestor,flag);
        if(flag)
        {
            ancestor.push_back(root->data);
            return;
        }
        return;
    }
    vector<int> Ancestors(struct Node *root, int target) {
        // Code here
        vector<int> ancestor;
        bool flag=false;
        inorder(root,target,ancestor,flag);
        return ancestor;
    }
};