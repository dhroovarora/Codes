https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/




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
    int getDecimalValue(ListNode* head) {
        ListNode*temp = head;
        int l=0;
        while(temp!=NULL){
            l++;
            temp = temp->next;
        }
        int ans=0;
        l--;
        while(head!=NULL){
            if(head->val==1){
                ans += pow(2,l--);
            }
            else{
                l--;
            }
            head = head->next;
        }
        return ans;
    }
};