https://www.geeksforgeeks.org/problems/count-nodes-of-linked-list/1




/* Link list node */
/*
struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
}; */

class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head){
    
        //Code here
        int c=0;
        while(head!= NULL){
            head = head->next;
            c++;
        }
        return c;
    }
};