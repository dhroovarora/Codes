https://leetcode.com/problems/longest-ideal-subsequence/description/?envType=daily-question&envId=2024-04-25




class Solution {
public:
    int longestIdealString(string s, int k) {
        int dp[27] = {0};
        int n = s.length();

        for (int i = n - 1; i >= 0; i--) {
            char cc = s[i];
            int idx = cc - 'a';
            int maxi = -__INT_MAX__;

            int left = max((idx - k), 0);
            int right = min((idx + k), 26);

            for (int j = left; j <= right; j++) {
                maxi = max(maxi, dp[j]);
            }

            dp[idx] = maxi + 1;
        }

        int max = -__INT_MAX__;
        for (int i = 0; i < 27; i++) {
            if (dp[i] > max)
                max = dp[i];
        }

        return max;
    }
};