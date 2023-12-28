https://www.geeksforgeeks.org/problems/wildcard-string-matching1126/1




class Solution{
    public:
    bool match(string wild, string pattern)
    {  
    int n=wild.length();
    int m=pattern.length();
        // code here
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        dp[0][0]=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                
                if(wild[i-1]==pattern[j-1] or wild[i-1]=='?'){
                    dp[i][j]=dp[i-1][j-1];
                }else if(wild[i-1]=='*'){
                    dp[i][j]=dp[i][j-1]||dp[i-1][j-1];
                }
                
            }
        }
        return dp[n][m];
    }
};