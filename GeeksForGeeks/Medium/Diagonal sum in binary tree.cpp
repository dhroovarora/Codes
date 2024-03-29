https://www.geeksforgeeks.org/problems/diagonal-sum-in-binary-tree/1




/*Complete the function below
Node is as follows:
struct Node{
    int data;
    Node *left,*right;
};
*/

class Solution {
  public:
    vector<int> diagonalSum(Node* root) {
        // Add your code here
        queue<Node*>q;
        vector<int>v;
        q.push(root);
        while(!q.empty())
        {
            Node*ptr;
            int sum=0,n=q.size();
            for(int i=0;i<n;i++)
            {
                ptr=q.front();
                q.pop();
                while(ptr!=NULL)
                {
                    sum+=ptr->data;
                    if(ptr->left)
                    {
                        q.push(ptr->left);
                    }
                    ptr=ptr->right;
                }
            }
            v.push_back(sum);
        }
        return v;
    }
};