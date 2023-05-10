https://leetcode.com/problems/spiral-matrix-ii/description/




class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n,vector<int> (n,0));
        int row_start = 0;
        int row_end = n-1;
        int col_start = 0;
        int col_end = n-1;
        int value = 0;
        while(value < n*n){
            for(int i=col_start;i<=col_end;i++)
                ans[row_start][i] = ++value;
            ++row_start;

            for(int i=row_start;i<=row_end;i++)
                ans[i][col_end] = ++value;
            --col_end;

            for(int i=col_end;i>=col_start;i--) 
                ans[row_end][i] = ++value;
            --row_end;

            for(int i=row_end;i>=row_start;i--)
                ans[i][col_start] = ++value;
            ++col_start;
            
        }
        return ans;
    } 
};