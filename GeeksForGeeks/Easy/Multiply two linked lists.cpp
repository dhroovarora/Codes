https://www.geeksforgeeks.org/problems/multiply-two-linked-lists/1




/* Linked list node structure
struct Node
{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};*/

/*The method multiplies
two  linked lists l1 and l2
and returns their product*/

/* Multiply contents of two linked lists */
class solution {
  public:
    long long  multiplyTwoLists (Node* l1, Node* l2)
    {
      //Your code here
      long num1 = 0, num2 = 0, mod = 1000000007;
           
           Node *temp1=l1;
           while(temp1!=NULL) {
             num1 = ((num1 * 10) + temp1->data)%mod;
             temp1=temp1->next;
           }
          
           Node  *temp2=l2;
           while(temp2!=NULL) {
             num2 = ((num2 * 10) + temp2->data)%mod;
             temp2=temp2->next;
           }
       return (num1*num2)%mod;
    }
};