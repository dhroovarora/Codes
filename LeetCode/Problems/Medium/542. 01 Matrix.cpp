https://leetcode.com/problems/01-matrix/description/




class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m = mat.size() , n = mat[0].size();
        queue<pair<int,int>> q;
        int maxi = m*n;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j] == 0)
                    q.push({i,j});
                else
                    mat[i][j] = maxi;
            }
        }
        vector<pair<int,int>> directions = {{1,0},{-1,0},{0,1},{0,-1}};
        while(!q.empty()){
            auto [ro,co] = q.front();
            q.pop();
            for(auto [row,col] : directions){
                int r = row + ro , c = col + co;
                if(r >= 0 && r < m && c >=0 && c < n && mat[r][c] > mat[ro][co] + 1){
                    q.push({r,c});
                    mat[r][c] = mat[ro][co] + 1;
                }
            }
        }
        return mat;
    }
};