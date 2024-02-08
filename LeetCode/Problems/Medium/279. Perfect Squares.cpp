https://leetcode.com/problems/perfect-squares/description/?envType=daily-question&envId=2024-02-08




class Solution {
public:
    int numSquares(int n) {
        int dp[n + 1];
        dp[0] = 0;
        for (int k = 1; k <= n; k++) {
            dp[k] = k;
            for (int j = 1; j*j <= k; j++) {
                if (1 + dp[k - j*j] < dp[k])
                    dp[k] = 1 + dp[k - j*j];
            }
        }
        return dp[n];
    }
};