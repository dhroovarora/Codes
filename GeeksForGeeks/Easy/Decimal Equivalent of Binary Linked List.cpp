https://www.geeksforgeeks.org/problems/decimal-equivalent-of-binary-linked-list/1




/* Link list Node/
struct Node
{
    bool data;   // NOTE data is bool
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; */

class Solution
{
    public:
        // Should return decimal equivalent modulo 1000000007 of binary linked list 
        long long unsigned int decimalValue(Node *head)
        {
           // Your Code Here
           if(!head)
               return 0;
           long long unsigned int ans =0;
           Node* temp = head;
           while(temp){
               ans = ((ans*2)%1000000007 + temp->data)%1000000007;
               temp = temp->next;
           }
           return ans;
        }
};