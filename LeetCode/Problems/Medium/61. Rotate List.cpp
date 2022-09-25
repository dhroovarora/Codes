https://leetcode.com/problems/rotate-list/




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
    ListNode* rotateRight(ListNode* head, int k) {
        
        ListNode *size = head;
        int n=0;
        while(size){
            n++;
            size = size->next;
        }
        if(head == NULL || head->next == NULL || k == 0){
            return head;
        }
        ListNode *temp = head;
        while(temp->next){
            temp = temp->next;
        }
        temp->next = head;
        k = k%n;
        n = abs(n - k);
        while(n--){
            temp = temp->next;
        }
        
        head = temp->next;
        temp->next = NULL;
        return head;
    }
};