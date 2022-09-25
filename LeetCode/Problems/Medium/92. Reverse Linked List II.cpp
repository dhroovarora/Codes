https://leetcode.com/problems/reverse-linked-list-ii/




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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dhroov = new ListNode(0);
        dhroov->next = head;
        ListNode *temp = dhroov;
        for(int i=0;i<left-1;i++){
            dhroov = dhroov->next;
        }
        ListNode* curr = dhroov->next;
        ListNode* temp2 = curr;
        ListNode* temp3 = dhroov;
        for(int i=0;i<=right-left;i++){
            ListNode *forward = curr->next;
            curr->next = dhroov;
            dhroov = curr;
            curr = forward;
        }
        temp2->next = curr;
        temp3->next = dhroov;
        return temp->next;
    }
};