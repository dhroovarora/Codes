https://www.geeksforgeeks.org/problems/find-the-number-of-islands/1




class Solution {
  public:
    // Function to find the number of islands.
    vector<vector<int>> dir{{0, 1}, {0, -1}, {-1, 0}, {1, 0}, {-1, -1}, {-1, 1}, {1, -1}, {1, 1}};
    void solve(vector<vector<char>> &grid, int i, int j, int n, int m)
    {
        if (i < 0 || j < 0 || i >= n || j >= m || grid[i][j] == '0')
        {
            return;
        }
        grid[i][j] = '0';
        for (auto &vec : dir)
        {
            int new_i = i + vec[0];
            int new_j = j + vec[1];
            solve(grid, new_i, new_j, n, m);
        }
    }
    int numIslands(vector<vector<char>> &grid)
    {
        int count = 0;
        int n = grid.size();
        int m = grid[0].size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == '1')
                {
                    solve(grid, i, j, n, m);
                    count++;
                }
            }
        }
        return count;
    }
};