https://www.geeksforgeeks.org/problems/k-distance-from-root/1




/* A binary tree node has data, pointer to left child
   and a pointer to right child /
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

class Solution
{
    public:
    // function should print the nodes at k distance from root
    vector<int> Kdistance(struct Node *root, int k)
    {
      // Your code here
      queue<pair<Node*, int>>Q;
      Q.push({root, 0});
      vector<int>ans;
      while(!Q.empty()){
          Node *cur = Q.front().first;
          int dis = Q.front().second;
          if(dis == k) ans.push_back(cur->data);
          
          if(cur->left != NULL)
          Q.push({cur->left, dis + 1});
          if(cur->right != NULL)
          Q.push({cur->right, dis + 1});
          
          Q.pop();
      }
      return ans;
    }
};