https://leetcode.com/problems/partition-list/description/




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
    ListNode* partition(ListNode* head, int x) {
        ListNode* ans1 = new ListNode();
        ListNode* ans2 = new ListNode();
        ListNode* temp1 = ans1;
        ListNode* temp2 = ans2;
        while(head){
            if(head->val < x){
                temp1->next = head;
                temp1 = temp1->next;
            }
            else{
                temp2->next = head;
                temp2 = temp2->next;
            }
            head = head->next;
        }
        temp1->next = ans2->next;
        temp2->next = nullptr;
        return ans1->next;
    }
};