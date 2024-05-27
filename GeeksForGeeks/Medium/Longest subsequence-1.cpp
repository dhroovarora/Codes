https://www.geeksforgeeks.org/problems/longest-subsequence-such-that-difference-between-adjacents-is-one4724/1




class Solution {
public:
    int recur(int idx, int n, vector<int>& a, int parentIdx, vector<vector<int>>& dp) {
        if (idx == n) {
            return 0;
        }
        if (dp[idx][parentIdx + 1] != -1) return dp[idx][parentIdx + 1];

        int take = 0;
        if (parentIdx == -1 || abs(a[idx] - a[parentIdx]) == 1) {
            take = 1 + recur(idx + 1, n, a, idx, dp);
        }

        int notake = recur(idx + 1, n, a, parentIdx, dp);

        return dp[idx][parentIdx + 1] = max(take, notake);
    }

    int longestSubseq(int n, vector<int>& a) {
        vector<vector<int>> dp(n, vector<int>(n + 1, -1));
        return recur(0, n, a, -1, dp);
    }
};