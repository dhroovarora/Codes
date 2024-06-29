https://www.geeksforgeeks.org/problems/identical-linked-lists/1




bool areIdentical(struct Node *head1, struct Node *head2)
{
    // Code here
    while(head1!= NULL && head2!= NULL){
        if(head1->data != head2->data)
            return 0;
        else{
            head1 = head1->next;
            head2 = head2->next;
        }
    }
    if(head1 == NULL && head2 == NULL){
        return 1;
    }
    return 0;
}