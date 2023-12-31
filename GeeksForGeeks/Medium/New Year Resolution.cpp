https://www.geeksforgeeks.org/problems/good-by-2023/1




class Solution {
    
    public:
    bool solve(int i, int N, int coins[], int sum, vector<vector<int>> &dp) {
        if(i == N) {
            if (sum && (sum % 20 == 0 || sum % 24 == 0 || sum == 2024))
                return 1;
            else
                return 0;
        }
        if (sum && (sum % 20 == 0 || sum % 24 == 0 || sum == 2024))
            return 1;
        if(dp[i][sum] != -1)
            return dp[i][sum];
        bool notTake = solve(i + 1, N, coins, sum, dp);
        bool take = solve(i + 1, N, coins, sum + coins[i], dp);
        return dp[i][sum] = take || notTake;
    }
    int isPossible(int N , int coins[]) 
    {
        int totalSum = accumulate(coins, coins + N, 0);
        vector<vector<int>> dp(N, vector<int>(totalSum + 1, -1));
        int sum = 0;
        return solve(0, N, coins, sum, dp);
    }
    
};