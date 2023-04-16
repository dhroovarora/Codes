https://www.codingninjas.com/codestudio/problems/delete-node-in-a-linked-list_1105578?topList=striver-sde-sheet-problems




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

void deleteNode(LinkedListNode<int> * node) {
    // Write your code here.
    node->data = node->next->data;
    node->next = node->next->next;
}