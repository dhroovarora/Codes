https://practice.geeksforgeeks.org/problems/insert-in-a-sorted-list/1




class Solution{
  public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node* head, int data) {
        // Code here
        Node*dhroov = new Node(data);
        if(data<head->data){
            dhroov->next = head;
            return dhroov;
        }
        else{
            Node*off =head;
            while(head->next && head->next->data<data){
                head = head->next;
            }
            Node *temp = head->next;
            head->next = dhroov;
            dhroov->next = temp;
            return off;
        }
    }
};