https://www.geeksforgeeks.org/problems/intersection-of-two-sorted-linked-lists/1




struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

class Solution
{
    public:
    Node* findIntersection(Node* head1, Node* head2)
    {
        // code goes here.
        Node *ans = new Node(-1);
        Node *work = ans;
        while(head1 && head2){
            if(head1->data == head2->data){
                Node *temp = new Node(head1->data);
                work->next = temp;
                head1 = head1->next;
                head2 = head2->next;
                work = work->next;
            }
            else if(head1->data < head2->data){
                head1 = head1->next;
            }
            else{
                head2 = head2->next;
            }
        }
        return ans->next;
    }
};