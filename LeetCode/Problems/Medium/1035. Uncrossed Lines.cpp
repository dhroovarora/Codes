https://leetcode.com/problems/uncrossed-lines/description/




class Solution {
public:
    // int helper(int n,int m,vector<int> &nums1,vector<int> &nums2,vector<vector<int>> &dp){
    //     if(n < 0 || m < 0)
    //         return 0;
    //     if(dp[n][m] != -1)
    //         return dp[n][m];
    //     int ans = 0;
    //     if(nums1[n] == nums2[m]){
    //         ans = 1 + helper(n-1,m-1,nums1,nums2,dp);
    //     }
    //     else{
    //         ans += max(helper(n-1,m,nums1,nums2,dp),helper(n,m-1,nums1,nums2,dp));
    //     }
    //     return dp[n][m] = ans;
    // }
    int maxUncrossedLines(vector<int> &nums1, vector<int> &nums2) {

        //  Memoization
        
        int n = nums1.size();
        int m = nums2.size();
        // vector<vector<int>> dp(n , vector<int>(m,-1));
        // return helper(n-1,m-1,nums1,nums2,dp);

        // SPACE OPTIMIZED
        
        if (n < m) return maxUncrossedLines(nums2, nums1);

        vector<int> dp(m + 1);
        for (int i = 1; i <= n; i++) {
            int prev = 0;
            for (int j = 1; j <= m; j++) {
                int curr = dp[j];
                if (nums1[i-1] == nums2[j-1]) {
                    dp[j] = prev + 1;
                } else {
                    dp[j] = max(dp[j-1], curr);
                }
                prev = curr;
            }
        }
        return dp[m];
    }
};