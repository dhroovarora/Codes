https://leetcode.com/problems/double-a-number-represented-as-a-linked-list/description/?envType=daily-question&envId=2024-05-07




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
    ListNode* reverse(ListNode* head){
        ListNode* prev = NULL;
        while(head){
            ListNode* curr = head->next;
            head->next = prev;
            prev = head;
            head = curr;
        }
        return prev;
    }
    ListNode* doubleIt(ListNode* head) {
        head = reverse(head);
        int carry = 0;
        ListNode* ans = head;
        ListNode* temp;
        while(head){
            int a = head->val;
            a *= 2;
            if(carry)
                ++a;
            head->val = a%10;
            carry = a/10;
            temp = head;
            head = head->next;
        }
        if(carry){
            ListNode *d = new ListNode(1);
            temp->next = d;
        }
        return reverse(ans);
    }
};