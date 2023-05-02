https://www.codingninjas.com/codestudio/problems/detect-the-first-node-of-the-loop_1112628?topList=striver-sde-sheet-problems




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

Node *firstNode(Node *head)
{
	//    Write your code here.
	if(!head)
		return NULL;
	Node *slow = head;
	Node *fast = head;
	bool flag = 1;
	while(fast && fast->next){
		fast = fast->next->next;
		slow = slow->next;
		if(fast == slow){
			flag = 0;
			break;
		}
	}
	if(flag)
		return NULL;
	fast = head;
	while(fast != slow){
		fast = fast->next;
		slow = slow->next;
	}
	return slow;
}