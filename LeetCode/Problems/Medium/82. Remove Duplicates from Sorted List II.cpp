https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/




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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *dhroov = new ListNode(0);
        ListNode *temp = dhroov;
        dhroov->next = head;
        while(head){
            
            if(head->next && head->val== head->next->val){
                while(head->next && head->val == head->next->val){
                    head = head->next;
                }
                dhroov->next = head->next;
            }
            else{
                dhroov = dhroov->next;
            }
            head = head->next;
            
        }
        return temp->next;
    }
};