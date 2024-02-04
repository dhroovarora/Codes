https://www.geeksforgeeks.org/problems/subtraction-in-linked-list/1




class Solution {
public:
    int borrow = 0;
    Node* rev(Node *head){
        if(!head || !head->next)
            return head;
        Node* curr = head;
        Node* prev = NULL;
        Node *next = NULL;
        while(curr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    int len(Node *head){
        int ans = 0;
        Node* temp = head;
        while(temp){
            ++ans;
            temp = temp->next;
        }
        return ans;
    }
    Node* remove_initial_zeros(Node* head){
        while(head && head->data == 0)
            head = head->next;
        return head;
    }
    Node* helper(Node* head1,Node* head2){
        if(!head1 && !head2)
            return NULL;
        if(!head2){
            int diff = head1->data - borrow;
            if(diff < 0)
                diff += 10,borrow=1;
            else
                borrow = 0;
            Node* temp = new Node(diff);
            temp->next = helper(head1->next,head2);
            return temp;
        }
        int diff = head1->data - head2->data - borrow;
        if(diff < 0)
            diff += 10,borrow = 1;
        else
            borrow = 0;
        Node* ans = new Node(diff);
        ans->next = helper(head1->next,head2->next);
        return ans;
    }
    Node* subLinkedList(Node* head1, Node* head2) {
        // Your implementation of subLinkedList goes here
        // Make sure to return the head of the resulting linked list
        head1 = remove_initial_zeros(head1);
        head2 = remove_initial_zeros(head2);
        if(!head1 && !head2)
            return new Node(0);
        if(!head1)
            return head2;
        if(!head2)
            return head1;
        int a = len(head1),b = len(head2);
        if(a < b)
            swap(head1,head2);
        else if(a == b){
            Node *h1 = head1,*h2 = head2;
            while(h1 && h1->data == h2->data)
                h1 = h1->next,h2 = h2->next;
            if(!h1)
                return new Node(0);
            if(h1->data < h2->data)
                swap(head1,head2);
        }
        return remove_initial_zeros(rev(helper(rev(head1),rev(head2))));
    }
};