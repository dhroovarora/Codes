https://www.geeksforgeeks.org/problems/arrange-consonants-and-vowels/1?




/*
Structure of the node of the linked list is as
struct Node
{
    char data;
    struct Node *next;

    Node(char x){
        data = x;
        next = NULL;
    }

};
*/

class Solution {
  public:
    // task is to complete this function
    // function should return head to the list after making
    // necessary arrangements
    struct Node* arrangeCV(Node* head) {
        // Code here
        Node*curr = head;
        Node *vo = new Node('v');
        Node *co = new Node('c');
        Node *temp1 = vo;
        Node *temp2 = co;
        while(curr!= NULL){
            if(curr->data=='a'||curr->data=='e'||curr->data=='i'||curr->data=='o'||curr->data=='u'){
               temp1->next = curr;
               temp1 = temp1->next;
            }
            else{
               temp2->next = curr;
               temp2 = temp2->next;
            }
            curr = curr -> next;
       }
       temp1->next = co->next;
       temp2->next = NULL;
       return vo->next;
    }
};