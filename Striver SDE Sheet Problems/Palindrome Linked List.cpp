https://www.codingninjas.com/codestudio/problems/palindrom-linked-list_799352?topList=striver-sde-sheet-problems&leftPanelTab=0




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
LinkedListNode<int>* getmid(LinkedListNode<int>* head){
    LinkedListNode<int>* slow = head;
    LinkedListNode<int>* fast = head->next;
    while(fast != NULL){
        slow = slow->next;
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
        }
    }
    return slow;
}
LinkedListNode<int> * reverse(LinkedListNode<int> *head){
    LinkedListNode<int> *prev = NULL;
    LinkedListNode<int> *curr = NULL;
    while (head) {
      curr = head->next;
      head->next = prev;
      prev = head;
      head = curr;
    }
    return prev;
}
bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    if(!head || !head->next)
        return 1;
    LinkedListNode<int>* node = getmid(head);
    node = reverse(node);
    while(node){
        if(node->data != head->data)
            return 0;
        node = node->next;
        head = head->next;
    }
    return 1;
}