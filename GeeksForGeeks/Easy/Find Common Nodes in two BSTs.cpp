https://practice.geeksforgeeks.org/problems/print-common-nodes-in-bst/1




class Solution
{
    public:
    //Function to find the nodes that are common in both BST. 
    map<int,int>mp;
    void check(Node *root){
        if(!root)
            return;
        mp[root->data]++;
        check(root->left);
        check(root->right);
    }
    vector <int> findCommon(Node *root1, Node *root2)
    {
     //Your code here
     vector<int>ans;
     check(root1);
     check(root2);
     for(auto i:mp){
         if(i.second>1) ans.push_back(i.first);
     }
     return ans;
    }
};