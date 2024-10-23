https://www.geeksforgeeks.org/problems/find-the-sum-of-last-n-nodes-of-the-linked-list/1




class Solution {
  public:
    /*Structure of the node of the linled list is as

    struct Node {
        int data;
        struct Node* next;

        Node(int x){
            data = x;
            next = NULL;
        }
    };
    */
    // your task is to complete this function
    // function should return sum of last n nodes
    int sumOfLastN_Nodes(struct Node* head, int n)
    {
          // Code here
          int m=0,a=0;
          Node *temp = head;
          while(temp!=NULL){
              temp = temp->next;
              m++;
          }
          Node *curr = head;
          while((m-n)!=0){
              curr = curr->next;
              n++;
          }
          while(curr!=NULL){
              a += curr->data;
              curr = curr->next;
          }
          return a;
    }
};