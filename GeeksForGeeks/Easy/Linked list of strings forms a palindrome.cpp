https: // www.geeksforgeeks.org/problems/linked-list-of-strings-forms-a-palindrome/1




/*
The structure of linked list is the following
struct Node
{
    string data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    bool palin(string s){
        string t = s;
        reverse(t.begin(),t.end());
        
        if(s==t){
            return 1;
        }
        return 0;
    }
    bool compute(Node* root)
    {
       //Your code goes here
       string s ="";
       while(root!= NULL){
           s += root->data;
           root = root->next;
       }
       return palin(s);
    }
};