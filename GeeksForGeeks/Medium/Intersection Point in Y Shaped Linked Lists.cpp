https://www.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1




/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

class Solution {
  public:
    // Function to find intersection point in Y shaped Linked Lists.
    int intersectPoint(Node* head1, Node* head2)
    {
        // Your Code Here
        Node *temp1 = head1;
        Node *temp2 = head2;
        while(temp1 != temp2){
            if(temp1)
                temp1 = temp1->next;
            else
                temp1 = head2;
            if(temp2)
                temp2 = temp2->next;
            else
                temp2 = head1;
        }
        return temp2->data;
    }
};