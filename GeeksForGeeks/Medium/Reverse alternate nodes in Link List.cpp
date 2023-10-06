https://practice.geeksforgeeks.org/problems/given-a-linked-list-reverse-alternate-nodes-and-append-at-the-end/1




class Solution
{
    public:
    void rearrange(struct Node *head)
    {
        //add code here
        if(head==NULL || head->next==NULL || head->next->next==NULL)
            return;
        Node *odd=head, *even=head->next;
        Node *dp=NULL;
        while(odd!=NULL && even!=NULL){
            even=odd->next;
            if(even!=NULL) 
                odd->next=even->next;
            else 
                break;
            if(even!=NULL) 
                even->next=dp;
            dp=even;
            if(odd!=NULL && odd->next!=NULL)
                odd=odd->next;
            else
                break;
        }
        odd->next=dp;
    }
};