https://www.codingninjas.com/codestudio/problems/merge-two-sorted-linked-lists_800332?topList=striver-sde-sheet-problems




#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
    Node<int>* ans = new Node<int>(0);
    Node<int>* dhr = ans;
    while(first && second){
        if(first->data <= second->data){
            Node<int> *p = new Node<int>(first->data);
            ans->next = p;
            ans = p;
            first = first->next;
        }
        else{
            Node<int> *p = new Node<int>(second->data);
            ans->next = p;
            ans = p;
            second = second->next;
        }
    }
    if(first){
        ans->next = first;
    }
    else if(second){
        ans->next = second;
    }
    return dhr->next;
}