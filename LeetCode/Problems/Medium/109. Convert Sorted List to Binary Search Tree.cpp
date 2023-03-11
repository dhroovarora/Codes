https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree/description/




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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        if(head == NULL)
            return NULL;
        if(head->next == NULL)
            return new TreeNode(head->val);
        ListNode *slow = head;
        ListNode *fast = head->next->next;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        TreeNode *ans = new TreeNode(slow->next->val);
        ListNode *rightside = slow->next->next;
        slow->next = NULL;
        ans->left = sortedListToBST(head);
        ans->right = sortedListToBST(rightside);
        return ans;
    }
};