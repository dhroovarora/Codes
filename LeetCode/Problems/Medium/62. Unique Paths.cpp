https://leetcode.com/problems/unique-paths/description/




class Solution {
public:
    int uniquePaths(int m, int n) {
        /* 2-D DP
        vector<vector<int>> dp(m,vector<int>(n));
        for(int i=0;i<m;i++)
            dp[i][0] = 1;
        for(int i=0;i<n;i++)
            dp[0][i] = 1;
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }
        return dp[m-1][n-1];
        */

        /* SPACE Optimized
        vector<int> prev(n,1),curr(n,1);
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++)
                curr[j] = prev[j] + curr[j-1];
            swap(prev,curr);
        }
        return prev[n-1];
        */
        long long ans = 1;
        for(int i=1;i<= m - 1;++i)
            ans = ans * (n - 1 + i) / i;
        return (int)ans;
    }
};