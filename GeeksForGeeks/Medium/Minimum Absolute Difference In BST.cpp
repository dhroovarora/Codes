https://www.geeksforgeeks.org/problems/minimum-absolute-difference-in-bst-1665139652/1




/*The Node structure is defined as
struct Node {
    int data;
    Node *left;
    Node *right;

};
*/

class Solution
{
    public:
    void in(Node*root,vector<int>&vec){
        if (root==NULL)
            return;
        in(root->left,vec);
        vec.push_back(root->data);
        in(root->right,vec);
    }
    int absolute_diff(Node *root)
    {   vector<int>vec;
        in(root,vec);
        int x=INT_MAX;
        for(int i=0;i<vec.size()-1;i++){
            if(abs(vec[i+1]-vec[i])<x)
                x=abs(vec[i+1]-vec[i]);
        }
        return x;
       
    }
};