https://www.geeksforgeeks.org/problems/quick-sort-on-linked-list/1




/* a node of the singly linked list
struct node
{
    int data;
    struct node *next;

    node(int x){
        data = x;
        next = NULL;
    }
}; */

// Solution class with quickSort function
class Solution {
  public:
  struct Node* partition(struct Node* head, struct Node* last){
      struct Node* i = head;
      struct Node* j = head->next;
      while(j!=last){
          if(j->data<head->data){
              i=i->next;
              swap(i->data,j->data);
          }
          j=j->next;
      }
      swap(i->data,head->data);
      return i;
  }
  void Quick_Sort(struct Node* head, struct Node* last){
      if(head == last || head->next == last){
          return;
      }
      struct Node* p = partition(head,last);
      Quick_Sort(head,p);
      Quick_Sort(p->next,last);
  }
    struct Node* quickSort(struct Node* head) {
        Quick_Sort(head,NULL);
        return head;
    }
};