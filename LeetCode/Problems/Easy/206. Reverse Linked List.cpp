https://leetcode.com/problems/reverse-linked-list/




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
    // ListNode* reverseList(ListNode* head) {
//         ListNode*temp1 = NULL;
//         ListNode*temp2 = head;
        
//         while(temp2!=NULL){
//             ListNode*fix = temp2->next;
//             temp2->next = temp1;
//             temp1 = temp2;
//             temp2 = fix;
//         }
//         return temp1;
        
        
    // }
    
    ListNode* reverseList(ListNode* head,ListNode*temp = NULL) {
        
        if(!head) return temp;
        
        ListNode*temp2 = head->next;
        head->next = temp;
        return reverseList(temp2,head);
    }
};