https://www.codingninjas.com/codestudio/problems/intersection-of-linked-list_630457?topList=striver-sde-sheet-problems&leftPanelTab=0




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

int findIntersection(Node *firstHead, Node *secondHead)
{
    //Write your code here
	set<Node*> s;
	while(firstHead){
		s.insert(firstHead);
		firstHead = firstHead->next;
	}
	while(secondHead){
		if(s.find(secondHead) != s.end())
			return secondHead->data;
		secondHead = secondHead->next;
	}
	return -1;
}