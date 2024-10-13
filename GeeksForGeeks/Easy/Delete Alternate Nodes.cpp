https://www.geeksforgeeks.org/problems/delete-alternate-nodes/1




/*
Structure of the node of the binary tree
struct Node
{
    int data;
    struct Node *next;

    Node(int x){
        int data = x;
        next = NULL;
    }
};
*/
// Complete this function
class Solution {
  public:
    void deleteAlt(struct Node *head){
    // Code here
        while(head!= NULL && head->next != NULL){
            Node*temp = head->next;
            head->next = head->next->next;
            delete temp;
            head = head->next;
        }
    }
};