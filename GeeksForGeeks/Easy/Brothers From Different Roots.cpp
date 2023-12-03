https://www.geeksforgeeks.org/problems/brothers-from-different-root/1




/*Structure of the Node of the BST is as
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution{
    public:
        void inorder(Node*root,vector<int>&a){
            if(root==NULL)
                return ;
            inorder(root->left,a);
            a.push_back(root->data);
            inorder(root->right,a);
            
        }
        int countPairs(Node* root1, Node* root2, int x){
            vector<int>a;
            vector<int>b;
            inorder(root1,a);
            inorder(root2,b);
            int count=0;
            unordered_set<int>st(a.begin(),a.end());
            for(int i=0;i<b.size();i++){
                if(st.find(x-b[i])!=st.end())
                count++;
            }
            return count;
        }
};