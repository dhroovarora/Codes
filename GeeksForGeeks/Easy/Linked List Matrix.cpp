https://www.geeksforgeeks.org/problems/linked-list-matrix/1




/*structure of the node of the linked list is as

struct Node
{
    int data;
    Node* right, *down;

    Node(int x){
        data = x;
        right = NULL;
        down = NULL;
    }
};
*/

// function must return the pointer to the first element of the in linked list i.e. that
// should be the element at arr[0][0]
class Solution {
  public:
    Node* constructLinkedMatrix(vector<vector<int>>& mat) {
        // code Here
        int n = mat.size();
        Node *ans = new Node(mat[0][0]);
        Node *head = ans;
        for(int i=0;i<n;i++){
            Node *temp = head;
            for(int j=0;j<n;j++){
                if(j+1 == n)
                    head->right = NULL;
                else
                    head->right = new Node(mat[i][j+1]);
                if(i+1 == n)
                    head->down = NULL;
                else
                    head->down = new Node(mat[i+1][j]);
                head = head->right;
            }
            head = temp;
            head = head->down;
        }
        return ans;
    }
};