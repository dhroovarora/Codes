https://www.hackerrank.com/challenges/30-binary-search-trees/problem?isFullScreen=true






		int getHeight(Node* root){
          //Write your code here
          if(!root)
            return -1;
          return max(getHeight(root->left),getHeight(root->right)) + 1;
        }

