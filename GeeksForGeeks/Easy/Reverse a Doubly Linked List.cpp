https://www.geeksforgeeks.org/problems/reverse-a-doubly-linked-list/1




/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
        
};
*/
class Solution
{
    public:
    Node* reverseDLL(Node * head)
    {
        //Your code here
        Node* prev = NULL;
        Node*temp;
        while(head){
            temp = head->next;
            head->next = prev;
            head->prev = temp;
            prev = head;
            head = temp;
        }
        return prev;
    }
};