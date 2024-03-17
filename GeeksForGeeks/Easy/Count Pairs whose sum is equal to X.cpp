https://www.geeksforgeeks.org/problems/count-pairs-whose-sum-is-equal-to-x/1




/*
Structure of the node of the linked list is as
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution{
  public:
    // your task is to complete this function
    int countPairs(struct Node* head1, struct Node* head2, int x) {
        // Code here
        unordered_map<int,int> m;
        while(head1!= NULL){
            m[head1->data]++;
            head1 = head1->next;
        }
        int ans =0;
        while(head2!= NULL){
            if(m[x - head2->data])
                ans++;
            head2 = head2->next;
        }
        return ans;
    }
};