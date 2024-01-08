https://www.geeksforgeeks.org/problems/merge-2-sorted-linked-list-in-reverse-order/1




class Solution
{
    public:
    
    struct Node *reverse(Node *head){
        Node *prev = NULL;
        Node *forward = NULL;
        while(head){
            forward = head->next;
            head->next = prev;
            prev = head;
            head = forward;
        }
        return prev;
    }
    struct Node * mergeResult(Node *node1,Node *node2)
    {
        // your code goes here
        Node *dhroov = new Node;
        Node *temp = dhroov;
        while(node1 && node2){
            if(node1->data >= node2->data){
                dhroov->next = node2;
                node2 = node2->next;
            }
            else{
                dhroov->next = node1;
                node1 = node1->next;
            }
            dhroov = dhroov->next;
        }
        if(node1){
            dhroov->next = node1;
        }
        else if(node2){
            dhroov->next = node2;
        }
        else{
            dhroov->next = NULL;
        }
        return reverse(temp->next);
    }
};