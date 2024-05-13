https://leetcode.com/problems/score-after-flipping-matrix/description/?envType=daily-question&envId=2024-05-13




class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        const int r= grid.size(), c= grid[0].size();
        int sum = 0;
        for (int j=0; j<c; j++) {
            int col1= 0;
            int b=1<<(c-1-j);
            for (int i = 0; i < r; i++) {
                bool one = (grid[i][0] == 0) ^ (grid[i][j] == 1);
                col1+=one;
            }
            sum += max(r-col1, col1)*b;
        }
        return sum;
    }
};