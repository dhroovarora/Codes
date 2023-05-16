https://leetcode.com/problems/swap-nodes-in-pairs/description/




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
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next)
            return head;
        ListNode* ans = head->next;
        ListNode* temp = head;
        ListNode* prev = NULL;
        while(head && head->next){
            temp = head->next->next;
            head->next->next = head;
            if(prev)
                prev->next = head->next;
            head->next = temp;
            prev = head;
            head = temp;
        }
        return ans;
    }
};