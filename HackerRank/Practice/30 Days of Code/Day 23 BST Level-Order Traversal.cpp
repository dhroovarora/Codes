https://www.hackerrank.com/challenges/30-binary-trees/problem?isFullScreen=true






	void levelOrder(Node * root){
      //Write your code here
        queue<Node*> q;
        if(root)
            q.push(root);
            
        while(q.size()){
            Node* n = q.front();
            cout << n->data << ' ';
            q.pop();
            if(n->left)
                q.push(n->left);
            if(n->right)
                q.push(n->right);
        }
    }
