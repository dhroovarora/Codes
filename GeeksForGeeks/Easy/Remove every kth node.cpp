https://www.geeksforgeeks.org/problems/remove-every-kth-node/1




/* Link list Node 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};
*/

/*You are required to complete this method*/

/* Function to get the middle of the linked list*/
/*K will always be in range */

class Solution {
    public:
    Node* deleteK(Node *head,int K)
    {
      //Your code here
      if(K==1)
        return NULL;
      int l=1;
      Node*ans = head;
      while(head!=NULL && head->next!=NULL){
          if(l == (K-1)){
              head->next = head->next->next;
              head = head->next;
              l=1;
          }
          else{
              head = head->next;
              ++l;
          }
      }
      return ans;
    }
};