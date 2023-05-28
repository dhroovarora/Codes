https://leetcode.com/problems/difference-of-number-of-distinct-values-on-diagonals/description/




class Solution {
public:
    vector<vector<int>> differenceOfDistinctValues(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> ans(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int a = i-1;
                int b = j-1;
                set<int> top;
                while(a >= 0 && b >= 0){
                    top.insert(grid[a][b]);
                    --a;
                    --b;
                }
                a = i+1;
                b = j+1;
                set<int> bottom;
                while(a < m && b < n){
                    bottom.insert(grid[a][b]);
                    ++a;
                    ++b;
                }
                int to = top.size();
                int bo = bottom.size();
                ans[i][j] = abs(to - bo);
            }
        }
        return ans;
    }
};