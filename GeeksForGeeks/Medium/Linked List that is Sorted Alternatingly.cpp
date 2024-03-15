https://www.geeksforgeeks.org/problems/linked-list-that-is-sorted-alternatingly/1




/*
struct Node
{
	int data;
	struct Node *next;
	
	Node(int x){
	    data =x;
	    next = NULL;
	}
};
*/

class Solution
{
    public:
    // your task is to complete this function
    
    Node *reverse(Node *head){
        Node *prev = NULL;
        Node *forward = NULL;
        while(head != NULL){
            forward = head->next;
            head->next = prev;
            prev = head;
            head = forward;
        }
        return prev;
    }
    Node *merge(Node *a,Node *b){
        if(!a) return b;
        if(!b) return a;
        if(a->data<=b->data){
            a->next = merge(a->next,b);
            return a;
        }
        else{
            b->next = merge(a,b->next);
            return b;
        }
    }
    void sort(Node **head)
    {
         // Code here
        Node *p = *head;
        Node *dhroov = p->next;
        Node *temp = dhroov;
        while(dhroov!= NULL && dhroov->next != NULL){
            p->next = p->next->next;
            dhroov->next = dhroov->next->next;
            p = p->next;
            dhroov = dhroov->next;
        }
        p->next = NULL;
        *head = merge(*head,reverse(temp));
    }
};