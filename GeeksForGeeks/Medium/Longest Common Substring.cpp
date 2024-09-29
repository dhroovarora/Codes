https://www.geeksforgeeks.org/problems/longest-common-substring1452/1?timeMachineDate=2024-08-14




class Solution {
private:
    int longestCommonSubstrHelper(int i, int j, string &str1, string &str2, vector<vector<int>> &dp, int &maxLen) {
        // Base case: if i or j are out of bounds (i < 0 or j < 0), return 0
        if (i < 0 || j < 0) return 0;

        // If already computed, return the stored value
        if (dp[i][j] != -1) return dp[i][j];

        // If the characters match, we extend the common substring
        if (str1[i] == str2[j]) {
            dp[i][j] = 1 + longestCommonSubstrHelper(i - 1, j - 1, str1, str2, dp, maxLen);
            maxLen = max(maxLen, dp[i][j]);
        } else {
            dp[i][j] = 0;  // If the characters don't match, reset the length
        }

        return dp[i][j];
    }

public:
    int longestCommonSubstr(string str1, string str2) {
        int n = str1.size();
        int m = str2.size();
        
        // Initialize dp table with -1
        vector<vector<int>> dp(n, vector<int>(m, -1));

        int maxLen = 0;

        // Iterate over all positions in the dp table, using 0-based indexing
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                longestCommonSubstrHelper(i, j, str1, str2, dp, maxLen);
            }
        }

        return maxLen;
    }
};