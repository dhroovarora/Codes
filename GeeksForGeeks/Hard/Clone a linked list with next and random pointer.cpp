https://practice.geeksforgeeks.org/problems/clone-a-linked-list-with-next-and-random-pointer/0




{
    private:
    void insertAtTail(Node* &head,Node* &tail,int data){
        Node *temp = new Node(data);
        if(head == NULL){
            head = temp;
            tail = temp;
            return;
        }
        tail->next = temp;
        tail = temp;
    }
    public:
    Node *copyList(Node *head)
    {
        //Write your code here
        Node *clonehead = NULL;
        Node* clonetail = NULL;
        
        Node *temp = head;
        
        while(temp){
            insertAtTail(clonehead,clonetail,temp->data);
            temp = temp->next;
        }
        temp = head;
        Node *temp2 = clonehead;
        while(temp){
            Node *forward = temp->next;
            temp->next = temp2;
            temp = forward;
            
            forward = temp2->next;
            temp2->next = temp;
            temp2 = forward;
        }
        temp = head;
        while(temp && temp->next){
            
            temp->next->arb = temp->arb ? temp->arb->next : temp->arb;
            temp = temp->next->next;
        }
        temp = head;
        temp2 = clonehead;
        while(temp){
            temp->next = temp2->next;
            temp = temp->next;
            
            if(temp){
                temp2->next = temp->next;
            }
            temp2 = temp2->next;
        }
        return clonehead;
    }

};