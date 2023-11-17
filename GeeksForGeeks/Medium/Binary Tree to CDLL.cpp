https://www.geeksforgeeks.org/problems/binary-tree-to-cdll/1




Node is as follows:
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/

class Solution
{
  public:
    //Function to convert binary tree into circular doubly linked list.
    Node* head = NULL;
    Node* prev = NULL;
    Node *bTreeToCList(Node *root)
    {
       if(root==NULL) {
           return NULL;
       }
       
       bTreeToCList(root->left);
       if(prev==NULL) {
           head = root;
       }
       else {
           prev->right = root;
           root->left = prev;
       }
       prev = root;
       bTreeToCList(root->right);
       if(prev->right==NULL) {
           prev->right = head;
           head->left = prev;
       }
       return head;
    }
};