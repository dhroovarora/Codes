https://www.geeksforgeeks.org/problems/maximum-sum-problem2211/1




class Solution
{
    public:
        int maxSum(int n){
            vector<int> dp(n+1, 0);
            for(int i = 1; i <= n; i++){
                int sum1 = i/2 + i/3 + i/4;
                int sum2 = dp[i/2] + dp[i/3] + dp[i/4];
                dp[i] = max({sum1, sum2, i});
            }
            return dp[n];
        }
};