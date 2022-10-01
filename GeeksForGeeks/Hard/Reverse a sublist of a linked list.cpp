https://practice.geeksforgeeks.org/problems/reverse-a-sublist-of-a-linked-list/0





/*Link list node 
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};*/

class Solution
{
    public:
    Node* reverseBetween(Node* head, int m, int n)
    {
        //code here
        Node *dummy = new Node(0);
        dummy->next = head;
        Node *prev = NULL;
        Node *curr = dummy;
        for(int i=0;i<m;i++){
            prev = curr;
            curr = curr->next;
        }
        Node *curr2 = curr;
        Node *prev2 = prev;
        for(int i=0;i<=n-m;i++){
            Node *forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        prev2->next = prev;
        curr2->next = curr;
        return dummy->next;
    }
};