https://practice.geeksforgeeks.org/problems/pairwise-swap-elements-of-a-linked-list-by-swapping-data/1




class Solution
{
    public:
    Node* pairWiseSwap(struct Node* head) 
    {
        // The task is to complete this method
        if(!head || !head->next)
            return head;
        Node *temp = head;
        Node *q = temp->next;
        temp->next = temp->next->next;
        q->next = temp;
        head = q;
        while(temp && temp->next && temp->next->next){
            Node *t = temp->next->next;
            temp->next->next = temp->next->next->next;
            t->next = temp->next;
            temp->next = t;
            temp = temp->next->next;
        }
        return head;
    }
};