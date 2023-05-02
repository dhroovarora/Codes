https://www.codingninjas.com/codestudio/problems/rotate-linked-list_920454?topList=striver-sde-sheet-problems




#include <bits/stdc++.h>

/********************************

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

********************************/


Node *rotate(Node *head, int k) {
     // Write your code here.
	Node *temp = head;
	int n = 0;
	while(temp){
		n++;
		temp = temp->next;
	}
	k = k%n;
	if(k==0)
		return head;
	temp = head;
	k = n - k;
	while(--k){
		temp = temp->next;
	}	
	Node *ans = temp->next;
	temp->next = NULL;
	temp = ans;
	while(temp->next)
		temp = temp->next;
	temp->next = head;
	return ans;
}