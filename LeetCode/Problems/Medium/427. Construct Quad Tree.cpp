https://leetcode.com/problems/construct-quad-tree/description/




/*
// Definition for a QuadTree node.
class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;
    
    Node() {
        val = false;
        isLeaf = false;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = _topLeft;
        topRight = _topRight;
        bottomLeft = _bottomLeft;
        bottomRight = _bottomRight;
    }
};
*/

class Solution {
public:

    Node* helper(vector<vector<int>>& grid, int r,int R,int c,int C){

        if(r > R || c > C)
            return NULL;

        bool isLeaf = 1;
        int val = grid[r][c];
        for(int i=r;i<=R;i++){
            for(int j=c;j<=C;j++){
                if(grid[i][j] != val){
                    isLeaf = 0;
                    break;
                }
            }
            if(!isLeaf)
                break;
        }

        if(isLeaf)
            return new Node(val,1);
        
        int rMid = r + (R-r)/2;
        int cMid = c + (C-c)/2;
        Node *topLeft = helper(grid,r,rMid,c,cMid);
        Node *topRight = helper(grid,r,rMid,cMid + 1,C);
        Node *bottomLeft = helper(grid,rMid + 1,R,c,cMid);
        Node *bottomRight = helper(grid,rMid+1,R,cMid+1,C);
        return new Node(0,0,topLeft,topRight,bottomLeft,bottomRight);
    }


    Node* construct(vector<vector<int>>& grid) {
        return helper(grid,0,grid.size()-1,0,grid.size()-1);
    }
};