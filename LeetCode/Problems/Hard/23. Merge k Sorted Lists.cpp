https://leetcode.com/problems/merge-k-sorted-lists/description/




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

    ListNode* merge(ListNode *first,ListNode *second){
        ListNode*head = new ListNode(0);
        ListNode *ans = head;
        while(first && second){
            if(first->val < second->val){
                head->next = first;
                first = first->next;
            }
            else{
                head->next = second;
                second = second-> next;
            }
            head = head->next;
        }
            head->next = first ? first : second;
        if(second){
            head->next = second;
        }
        return ans->next;
    }
    ListNode* mergeKListsHelper(vector<ListNode*>& lists, int start, int end) {
        if (start == end) {
            return lists[start];
        }
        if (start + 1 == end) {
            return merge(lists[start], lists[end]);
        }
        int mid = start + (end - start) / 2;
        ListNode* left = mergeKListsHelper(lists, start, mid);
        ListNode* right = mergeKListsHelper(lists, mid + 1, end);
        return merge(left, right);
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size() == 0)
            return NULL;
        return mergeKListsHelper(lists,0,lists.size() - 1);
    }
};