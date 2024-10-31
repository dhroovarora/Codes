https://www.geeksforgeeks.org/problems/insert-in-sorted-way-in-a-sorted-dll/1






/*structure of the node of the DLL is as
struct Node {
	int data;
	struct Node* prev, *next;
};
*/
// function should insert a new node in sorted way in
// a sorted doubly linked list
//Return the head after insertion
Node* sortedInsert(Node * head, int x)
{
	// Code here
	Node *dhroov = new Node;
	dhroov->data = x;
	if(head->data > x){
	    head->prev = dhroov;
	    dhroov->next = head;
	    dhroov->prev = NULL;
	    return dhroov;
	}
	else{
	    Node *ans = head;
	    
	    while(head!= NULL && head->next != NULL){
	        if(head->next->data > x){
	            break;
	        }
	        head = head->next;
	    }
        dhroov->next = head->next;
	    dhroov->prev = head;
	    head->next = dhroov;
	    if(dhroov->next != NULL){
	        dhroov->next->prev = dhroov;
	    }
	    return ans;
	}
}


/*
if(head->data > x){
	            
	            head->prev->next = dhroov;
	            dhroov->prev = head->prev;
	            dhroov->next = head;
	            break;
	        }
	        */