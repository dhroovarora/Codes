https://www.codingninjas.com/codestudio/problems/cycle-detection-in-a-singly-linked-list_628974?topList=striver-sde-sheet-problems




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

bool detectCycle(Node *head)
{
	//	Write your code here
	Node *fast = head;
	Node *slow = head;
	while(fast && fast->next){
		fast = fast->next->next;
		slow = slow->next;
		if(fast == slow)
			return 1;
	}
	return 0;
}