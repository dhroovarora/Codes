https://practice.geeksforgeeks.org/problems/delete-nodes-having-greater-value-on-right/1




/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
    public:
    Node* reverse(Node *head){
        Node *prev = NULL;
        Node *curr = head;
        Node *forward = NULL;
        while(curr){
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
    Node *compute(Node *head)
    {
        // your code goes here
        head = reverse(head);
        Node *temp = head;
        while(head && head->next){
            if(head->data > head->next->data){
                head->next = head->next->next;
            }
            else{
                head = head->next;
            }
        }
        return reverse(temp);
    }
    
};