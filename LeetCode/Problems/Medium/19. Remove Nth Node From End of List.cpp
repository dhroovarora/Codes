https://leetcode.com/problems/remove-nth-node-from-end-of-list/




/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode *temp = head;
        int c = 0;
        while(temp!= NULL){
            c++;
            temp = temp->next;
        }
        if(n==c){
            return head->next;
        }
        c = c - n - 1;
        temp = head;
        while(c--){
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
};