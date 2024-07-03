https://www.geeksforgeeks.org/problems/remove-all-occurences-of-duplicates-in-a-linked-list/1




/* Linked List node structure
    
struct Node {
	int data;
	struct Node *next;
};

*/

class Solution
{
    public:
    Node* removeAllDuplicates(struct Node* head)
    {
        //code here
        Node *dummy = new Node(0);
        dummy->next = head;
        Node* prev = dummy;
        Node* curr = head;
        while(curr){
            while(curr->next && curr->data == curr->next->data){
                curr = curr->next;
            }
            if(prev->next == curr){
                prev = prev->next;
            }
            else{
                prev->next = curr->next;
            }
            curr = curr->next;
        }
        return dummy->next;
    }
};


//{ Driver Code Starts.
/* Function to print linked list */
void printList(struct Node *head) {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

// Driver program to test above functions
int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;

        cin >> N;

        Node *head = NULL;
        Node *temp = head;

        for (int i = 0; i < N; i++) {
            int data;
            cin >> data;
            if (head == NULL)
                head = temp = new Node(data);
            else {
                temp->next = new Node(data);
                temp = temp->next;
            }
        }

        Solution ob;
        head = ob.removeAllDuplicates(head);
        printList(head);

        cout << "\n";
    }
    return 0;
}