https://www.geeksforgeeks.org/problems/print-a-binary-tree-in-vertical-order/1




class Solution
{
    public:
    //Function to find the vertical order traversal of Binary Tree.
    vector<int> verticalOrder(Node *root)
    {
        vector<int> v;
         
        map< int, vector<int> > mp;
        queue< pair<Node*, int> > q;
        q.push({root, 0});
        
        while(q.empty() == false){
            auto p = q.front();
            q.pop();
            int hd = p.second;
            Node *curr = p.first;
            
            mp[hd].push_back(curr->data);
            
            if(curr->left!=NULL) q.push({curr->left, hd-1});
            if(curr->right!=NULL) q.push({curr->right, hd+1});
        }
        for(auto p:mp){
            vector<int> s = p.second;
            for(int x:s)
              v.push_back(x);
        }
        
        return v;
    }
};