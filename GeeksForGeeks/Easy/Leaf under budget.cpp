https://practice.geeksforgeeks.org/problems/leaf-under-budget/1




/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/
class Solution
{
public:
    void inorder(Node *root,vector<int>&v,int count){
        if(root==NULL){
            count--;
            return;
        }
        if(root->left==NULL && root->right==NULL){
            v.push_back(count);
        }
        count=count+1;
        inorder(root->left,v,count);
        inorder(root->right,v,count);
    }
    int getCount(Node *root, int k)
    {
        //code here
        vector<int>v;
        inorder(root,v,1);
        sort(v.begin(),v.end());
        int count=0;
        for(auto i:v){
            if(k-i>=0){
                k-=i;
                count++;
            }
        }
       return count;
    }
};