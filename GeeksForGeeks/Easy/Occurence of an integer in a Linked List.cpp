https://www.geeksforgeeks.org/problems/occurence-of-an-integer-in-a-linked-list/1




/*
  Node is defined as
struct node
{
    int data;
    struct node* next;

    node(int x){
        data = x;
        next = NULL;
    }
}*head;
*/
class Solution {
  public:
    int count(struct Node* head, int key) {
        // add your code here
        int dhroov = 0;
        while(head){
            if(head->data == key)
                ++dhroov;
            head = head->next;
        }
        return dhroov;
    }
};