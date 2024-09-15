https://www.geeksforgeeks.org/problems/binary-tree-to-dll/1




/* Structure for tree and linked list

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

// This function should return head to the DLL
class Solution {
  public:
    vector<int> res;
    void rec( Node* root ){
        if ( root == NULL ) return;
        rec(root->left);
        res.push_back(root->data);
        rec(root->right);
    }
    Node* bToDLL(Node* root) {
        Node* head = new Node(-1); rec(root);
        Node* prev = NULL; Node* temp = head;
        for ( auto i : res ){
            temp->right = new Node(i);
            temp->left = prev;
            prev = temp;
            temp = temp->right;
        } temp->left = prev;
        Node* ans = head->right;
        ans->left = NULL;
        return ans;
    }
};