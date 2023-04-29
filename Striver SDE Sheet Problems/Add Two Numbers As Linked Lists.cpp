https://www.codingninjas.com/codestudio/problems/add-two-numbers-as-linked-lists_1170520?topList=striver-sde-sheet-problems&leftPanelTab=0




#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
	        Node *next;
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
        };

*****************************************************************/
void insert(Node* &head,Node* &tail,int val){
    Node* temp = new Node(val);
    if(!head){
        head = temp;
        tail = temp;
    }
    else{
        tail->next = temp;
        tail = temp;
    }
}
Node *addTwoNumbers(Node *head1, Node *head2)
{
    // Write your code here.
    Node *head = NULL;
    Node *tail = NULL;
    int carry = 0;
    while(head1 || head2 || carry){
        int val1 = 0;
        if(head1)
            val1 = head1 -> data;
        int val2 = 0;
        if(head2)
            val2 = head2 -> data;
        int sum = val1 + val2 + carry;
        int digit = sum%10;
        insert(head,tail,digit);
        carry = sum / 10;
        if(head1)
            head1 = head1 -> next;
        if(head2)
            head2 = head2 -> next;    
    }
    return head;
}