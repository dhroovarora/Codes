https://www.geeksforgeeks.org/problems/find-length-of-loop/1




/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        // Code here
        if(head == NULL || head->next == NULL)
            return 0;
        if(head->next == head){
                return 1;
        }
        Node *slow = head;
        Node *fast = head;
        while(fast!= NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast)
                break;
        }
        Node *temp = NULL;
        int c = 0;
        if(slow == fast){
            slow = head;
            while(slow != fast){
                slow = slow->next;
                fast = fast->next;
            }
            temp = slow;
            while(temp->next != slow){
                temp = temp->next;
                c++;
            }
            c++;
            temp->next = NULL;
        }
        return c;
    }
};