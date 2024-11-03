https://www.geeksforgeeks.org/problems/linked-list-length-even-or-odd/1




/*structure of a node of the linked list is as
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
class Solution {
  public:
    bool isLengthEven(struct Node **head) {
        // Code here
        int count = 0 ;
        while(*head){
            count++;
            (*head) = (*head)->next;
        }
        return !(count&1);
        // return count%2==0;
    }
};