https://www.geeksforgeeks.org/problems/delete-node-in-doubly-linked-list/1




class Solution
{
    public:
    Node* deleteNode(Node *head_ref, int x)
    {
      //Your code here
      if(head_ref==NULL || head_ref->next==NULL){
	       return NULL;
	   }
	   if(x==1){
	       head_ref=head_ref->next;
	       head_ref->prev=NULL;
	       return head_ref;
	       
	   }
      Node *temp = head_ref;
      for(int i=1;i<x && head_ref!= NULL;i++){
          head_ref = head_ref->next;
      }
      head_ref->prev->next = head_ref->next;
      return temp;
    }
};