https://www.geeksforgeeks.org/problems/number-of-paths-in-a-matrix-with-k-coins2728/1




class Solution {
public:
    long find(int n, int k, vector<vector<int>> &arr, int x, int y, vector<vector<vector<long>>> &dp) {
        if (x >= n || y >= n || k < 0) return 0;
        if (x == n - 1 && y == n - 1 && k - arr[x][y] == 0) return 1;
        if (dp[x][y][k] != -1) return dp[x][y][k];
        
        long a = find(n, k - arr[x][y], arr, x + 1, y, dp);
        long b = find(n, k - arr[x][y], arr, x, y + 1, dp);
        
        return dp[x][y][k] = a + b;
    }

    long long numberOfPath(int n, int k, vector<vector<int>> &arr) {
        vector<vector<vector<long>>> dp(n, vector<vector<long>>(n, vector<long>(k + 1, -1))); // Initialize DP table with -1
        return find(n, k, arr, 0, 0, dp);
    }
};