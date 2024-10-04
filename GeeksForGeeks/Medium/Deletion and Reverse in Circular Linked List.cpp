https://www.geeksforgeeks.org/problems/deletion-and-reverse-in-linked-list/1




class Solution {
  public:
    // Function to reverse a circular linked list
    Node* reverse(Node* head) {
        Node* next_=head->next;
        Node* temp=NULL;
        Node* last = head;
        
        while(next_!=last)
        {
            temp=next_->next;
            next_->next=head;
            head=next_;
            next_=temp;
        }
        
        last->next = head;
        
        return head;
        
    }

    // Function to delete a node from the circular linked list
    Node* deleteNode(Node* head, int key) {
        
        //if only one node then we return NULL because that one node will be delete
        if(!head->next)
        return NULL;
        
        
        //i will start from second node so previous becomde first node 
        //i stored it in prev variable
        Node* prev = head;
        
        //ans this is our current node
        Node* curr = head->next;
        Node* ansNode = NULL;
        
        
        //special case handling
        //if first node data is equal to key
        //because we dont have any previous node so we need to traverse whole list and 
        //firstly we get previous of forst node
        
        if(head->data==key)
        {
            ansNode = head->next;
            while(curr!=head)
            {
                prev=curr;
                curr=curr->next;
            }
            
            prev->next=curr->next;
            
            return ansNode;
            
        }
        else
        ansNode = head;
        
        
        //now for normal case this code 
        
        Node* flag = curr;
        
        do
        {
            if(curr->data==key)
            {
                prev->next = curr->next;
                return ansNode;
            }
            prev = curr;
            curr = curr->next;
            
        }
        while(curr!=flag);
        
        return ansNode;
    }
    
};