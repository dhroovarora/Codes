https://leetcode.com/problems/add-two-numbers-ii/




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
        ListNode* forward = NULL;
        while(head){
            forward = head->next;
            head->next = prev;
            prev = head;
            head = forward;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> a;
        stack<int> s;
        ListNode *ans = new ListNode(0);
        ListNode *dhroov = ans;
        while(l1){
            a.push(l1->val);
            l1 = l1->next;
        }
        while(l2){
            s.push(l2->val);
            l2 = l2->next;
        }
        int c = 0;
        while(a.size() != 0 || s.size() != 0 || c != 0){
            int sum = 0;
            if(a.size() != 0){
                sum += a.top();
                a.pop();
            }
            if(s.size() != 0){
                sum += s.top();
                s.pop();
            }
            sum += c;
            c = sum/10;
            dhroov->next = new ListNode(sum%10);
            dhroov = dhroov->next;
        }
        return reverse(ans->next);
    }
};