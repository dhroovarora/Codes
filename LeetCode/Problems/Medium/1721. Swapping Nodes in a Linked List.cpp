https://leetcode.com/problems/swapping-nodes-in-a-linked-list/description/




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
    ListNode* swapNodes(ListNode* head, int k) {
        int size = 0;
        ListNode* temp = head;
        while(temp){
            size++;
            temp = temp->next;
        }
        temp = head;
        --k;
        int p = k;
        while(p--){
            temp = temp->next;
        }
        ListNode* temp2 = head;
        size -= k;
        while(--size){
            temp2 = temp2->next;
        }
        int dhr = temp->val;
        temp->val = temp2->val;
        temp2->val = dhr;
        return head;
    }
};