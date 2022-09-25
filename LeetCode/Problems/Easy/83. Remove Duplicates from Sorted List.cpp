https://leetcode.com/problems/remove-duplicates-from-sorted-list/




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
        ListNode *play = head;
        while(play!= NULL && play->next != NULL){
            if(play->next->val == play->val){
                play->next = play->next->next;
            }
            else{
                play = play->next;
            }
        }
        return head;
    }
};