https://www.codingninjas.com/codestudio/problems/delete-kth-node-from-end-in-linked-list_799912?topList=striver-sde-sheet-problems




#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/
LinkedListNode<int>* reverse(LinkedListNode<int> *head){
    LinkedListNode<int>*prev = NULL;
    LinkedListNode<int>*curr = head;
    while(head){
        curr = head->next;
        head->next = prev;
        prev = head;
        head = curr;
    }
    return prev;
}
LinkedListNode<int>* removeKthNode(LinkedListNode<int> *head, int K)
{
    // Write your code here.
    if(K==0)
        return head;
    head = reverse(head);
    LinkedListNode<int>* ans = head;
    if(K==1)
        return reverse(ans->next);
    --K;
    while(--K){
        head = head->next;
    }
    head->next = head->next->next;
    return reverse(ans);
}