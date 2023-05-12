https://leetcode.com/problems/solving-questions-with-brainpower/description/




class Solution {
public:
    // long long helper(int i,vector<vector<int>> & arr,int n,vector<long long> &dp){
    //     if(i>=n)
    //         return 0;
    //     if(dp[i] != -1)
    //         return dp[i];
    //     long long pick = arr[i][0] + helper(i+arr[i][1]+1,arr,n,dp);
    //     long long notpick = helper(i+1,arr,n,dp);
    //     return dp[i] = max(pick,notpick);
    // }
    long long mostPoints(vector<vector<int>>& questions) {
        
        int n = questions.size();
        vector<long long> dp(n+1,0);

        //Memoization
        // return helper(0,questions,n,dp);

        // Tabulation
        
        for(int i=n-1;i>=0;i--){
            long long pick = questions[i][0] + dp[min(n,i + questions[i][1] + 1)];
            long long notpick = dp[i+1];
            dp[i] = max(pick,notpick);
        }
        return dp[0];
    }
};