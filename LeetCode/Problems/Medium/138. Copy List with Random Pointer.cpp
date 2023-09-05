https://leetcode.com/problems/copy-list-with-random-pointer/description/?envType=daily-question&envId=2023-09-05




/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*,Node*> m;
        Node *ans = new Node(0);
        Node *curr = ans;
        Node *temp = head;
        while(temp){
            Node *copy = new Node(temp->val);
            m[temp] = copy;
            curr->next = copy;
            temp = temp->next;
            curr = curr->next;
        }
        temp = head;
        curr = ans->next;
        while(temp){
            if(temp->random)
                curr->random = m[temp->random];
            temp = temp->next;
            curr = curr->next;
        }
        return ans->next;
    }
};