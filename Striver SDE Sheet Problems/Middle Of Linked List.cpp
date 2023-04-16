https://www.codingninjas.com/codestudio/problems/middle-of-linked-list_973250?topList=striver-sde-sheet-problems




#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the Node class:

       class Node 
        { 
        public:
            int data;
            Node *next;
            Node(int data) 
            {
               this->data = data;
              this->next = NULL;
            }
        };

*****************************************************************/

Node *findMiddle(Node *head) {
    // Write your code here
    Node *slow = head;
    Node *fast = head;
    while(fast && fast->next){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}