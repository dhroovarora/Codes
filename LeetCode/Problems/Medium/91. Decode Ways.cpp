https://leetcode.com/problems/decode-ways/description/




class Solution {
public:
    int helper(string s,int i,vector<int> &dp){
        if(s[i] == '0')
            return 0;
        if(i>= s.size() - 1)
            return 1;
        if(dp[i] != -1)
            return dp[i];
        if(s[i] == '2' && s[i+1] >= '7')
            return helper(s,i+1,dp);a
        if(s[i] >= '3')
            return helper(s,i+1,dp);
        return dp[i] = helper(s,i+1,dp) + helper(s,i+2,dp);
    }
    int numDecodings(string s) {
        vector<int> dp(s.size(),-1);
        return helper(s,0,dp);z
    }
};