https://www.geeksforgeeks.org/problems/leaf-at-same-level/1




/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/

class Solution{
  public:
    /*You are required to complete this method*/
    bool check(Node *root){
        queue<Node*> q;
        bool flag;
        q.push(root);
        
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                Node* t=q.front();
                q.pop();
                
                if(!t->left && !t->right){
                    flag=1;
                    continue;
                }
                if(t->left!=NULL)
                    q.push(t->left);
                if(t->right!=NULL)
                    q.push(t->right);
            }
            if(flag && q.size()>0)
                return(false);
            
        }
        return(true);
        
    }
};