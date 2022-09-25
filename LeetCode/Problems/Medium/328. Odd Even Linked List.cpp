https://leetcode.com/problems/odd-even-linked-list/




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
    ListNode* oddEvenList(ListNode* head) {
        ListNode *temp = head;
        ListNode *odd = new ListNode(0);
        ListNode *o = odd;
        ListNode *even = new ListNode(0);
        ListNode *e = even;
        int i=0;
        while(temp){
            if(i%2){
                o->next = temp;
                o = o->next;
            }
            else{
                e->next = temp;
                e = e->next;
            }
            temp = temp->next;
            i++;
        }
        o->next = NULL;
        e->next = odd->next;
        return even->next;
    }
};