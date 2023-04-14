https://www.hackerrank.com/challenges/30-linked-list-deletion/problem?isFullScreen=true






          Node* removeDuplicates(Node *head)
          {
            //Write your code here
            Node* temp = head;
            while(head->next){
                if(head->data == head->next->data)
                    head->next = head->next->next;
                else
                    head = head->next;
            }
            return temp;
          }