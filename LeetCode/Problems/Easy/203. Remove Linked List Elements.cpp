https://leetcode.com/problems/remove-linked-list-elements/




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
    ListNode* removeElements(ListNode* head, int val) {
        
        if(head == NULL){
            return head;
        }
        int c=0;
        if(head->val == val){
            ListNode*temp = new ListNode(-1);
            temp->next = head;
            head = temp;
            c++;
        }
        ListNode*ans = head;
        while(head != NULL && head->next!=NULL){
            
            if(head->next->val == val){
                head->next = head->next->next;
            }
            else{
                head = head->next;
            }
        }
        if(c){
            return ans->next;
        }
        return ans;
    }   
};