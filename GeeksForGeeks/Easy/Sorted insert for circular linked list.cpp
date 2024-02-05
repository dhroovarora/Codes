https://www.geeksforgeeks.org/problems/sorted-insert-for-circular-linked-list/1




/*
struct Node
{
  int data;
  struct Node *next;
  
  Node(int x){
      data = x;
      next = NULL;
  }
  
};
 */
 
// This function should return head of
// the modified list
class Solution
{
    public:
    Node *sortedInsert(Node* head, int data)
    {
       //Your code here
       Node *ans = new Node(data);
       if(!head){
           ans->next = ans;
           return ans;
       }
       if(data < head->data){
           ans->next = head;
           Node*temp = head;
           while(head->next != temp){
               head = head->next;
           }
           head->next = ans;
           return ans;
       }
       Node*temp = head;
       while(head->next != temp && head->next->data < data){
           head = head->next;
       }
       if(head->next == temp){
           head->next = ans;
           ans->next = temp;
       }
       else{
           ans->next = head->next;
           head->next = ans;
       }
       return temp;
    }
};