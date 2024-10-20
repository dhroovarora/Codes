https://www.geeksforgeeks.org/problems/sort-a-k-sorted-doubly-linked-list/1




// User function Template for C++

/*
// a node of the doubly linked list
class DLLNode
{
public:
    int data;
    DLLNode *next;
    DLLNode *prev;
    DLLNode(int val)
    {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/
class Solution {
  public:
    // function to sort a k sorted doubly linked list
    DLLNode *sortAKSortedDLL(DLLNode *head, int k) {
        
        if(!head) return head;
        // using minheap to sort the linked List
        priority_queue<int,vector<int>,greater<int>> pq;
        
        int i = 0;
        // push k nodes in priority queue
        while(i<k+1 && head)
        {
            pq.push(head->data);
            head = head->next;
            i++;
        }
        
        DLLNode* temp = new DLLNode(-1);
        DLLNode* prevs = new DLLNode(NULL);
        DLLNode* ans = temp;
        temp ->prev =prevs;
        
        while(!pq.empty())
        {
            auto top = pq.top();
            pq.pop();
            
            temp->next = new DLLNode(top);
            prevs = temp;
            temp = temp->next;
            temp->prev = prevs;
            
            if(head)
            { 
                pq.push(head->data);
                head = head->next;
            }
        }
        return ans->next;
    }
};