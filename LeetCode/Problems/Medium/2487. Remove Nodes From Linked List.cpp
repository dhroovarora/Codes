https://leetcode.com/problems/remove-nodes-from-linked-list/description/?envType=daily-question&envId=2024-05-06




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
    ListNode *reverse(ListNode* head){
        ListNode *prev = NULL;
        while(head){
            ListNode* curr = head->next;
            head->next = prev;
            prev = head;
            head = curr;
        }
        return prev;
    }
    ListNode* removeNodes(ListNode* head) {
        ListNode* ans = reverse(head);
        head = ans;
        int maxi = head->val;
        while(head->next){
            if(head->next->val >= maxi){
                maxi = head->next->val;
                head = head->next;
            }
            else{
                head->next = head->next->next;
            }
        }
        return reverse(ans);
    }
};