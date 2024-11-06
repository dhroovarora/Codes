https://www.geeksforgeeks.org/problems/root-to-leaf-paths-sum/1




/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */

class Solution {
  public:
    int ans=0;
    void solve(Node* root,int sum){
        if(!root) return ;
        if(!root->left && !root->right){
            
            sum=sum*10+root->data;
            ans+=sum;
        }
        solve(root->left,sum*10+root->data);
        solve(root->right,sum*10+root->data);
    }
    int treePathsSum(Node *root) {
        // code here.
        solve(root,0);
        return ans;
    }
};