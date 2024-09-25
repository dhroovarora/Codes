https://www.geeksforgeeks.org/problems/check-if-linked-list-is-pallindrome/1




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

class Solution{
  public:
    //Function to check whether the list is palindrome.
    Node* getMid(Node* head){
        Node* slow=head;
        Node* fast=head;
        
        while(fast !=NULL && fast->next!=NULL){
            fast = fast -> next ->next;
            slow = slow-> next;
        }
        return slow;
    }
    Node* reverse(Node* head){
        Node* curr=head;
        Node* prev=NULL;
        Node* next=NULL;
        
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    bool isPalindrome(Node *head)
    {
        //Your code here
        if(!head->next) return 1;
        
        Node*mid = getMid(head);
        
        mid = reverse(mid);
        
        while(mid!= NULL){
            if(head->data != mid->data){
                return 0;
            }
            head = head->next;
            mid = mid->next;
        }
        return 1;
    }
};