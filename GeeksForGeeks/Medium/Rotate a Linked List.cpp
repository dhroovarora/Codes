https://www.geeksforgeeks.org/problems/rotate-a-linked-list/1




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

class Solution
{
    public:
    Node* rotate(Node* head, int k)

    {

        if(head == NULL || head->next == NULL || k == 0)return head;

        Node* temp = head;

        while(temp->next != NULL){

            temp = temp->next;

        }

        temp->next = head;

        while(k--){

            temp = temp->next;

        }

        head = temp->next;

        temp->next = NULL;

        return head;

    }
};