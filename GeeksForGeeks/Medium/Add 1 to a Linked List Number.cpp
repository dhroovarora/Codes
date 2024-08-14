https://www.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/1




/* 

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

class Solution
{
    public:
    Node* reverse(Node *head){
        
        Node*prev = NULL;
        Node*forward = NULL;
        while(head!=NULL){
            forward = head->next;
            head->next= prev;
            prev = head;
            head = forward;
        }
        return prev;
    }
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        Node *temp = reverse(head);
        Node *temp2 = temp;
        while(temp->data==9 && temp->next!=NULL){
            temp->data =0;
            temp = temp->next;
        }
        if(temp->next==NULL && temp->data ==9){
            temp->data = 0;
            Node*off = new Node(1);
            temp->next = off;
        }
        else{
            temp->data +=1;
        }
        return reverse(temp2);
    }
};