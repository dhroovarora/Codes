https://www.hackerrank.com/challenges/30-linked-list/problem?isFullScreen=true






      Node* insert(Node *head,int data)
      {
          //Complete this method
          Node *temp = new Node(data);
          if(!head)
              head = temp;
          else{
              Node *lock = head;
              while(lock->next)
                  lock = lock->next;
              lock->next = temp;
          }
          return head;
      }
