https://www.geeksforgeeks.org/problems/find-number-of-times-a-string-occurs-as-a-subsequence3020/1




class Solution {
    public static int countWays(String s1, String s2) {
        // code here
        int mod = 1000000007;
        int n = s1.length();
        int m = s2.length();
        
        int[][] dp = new int[n+1][m+1];
        
        for(int i=0;i<=n;++i)
            dp[i][0] = 1;
        for(int i=1;i<=n;++i){
            for(int j=1;j<=m;++j){
                if(s1.charAt(i-1) == s2.charAt(j-1)){
                    dp[i][j] = (dp[i-1][j-1] + dp[i-1][j])%mod;
                }
                else{
                    dp[i][j] = dp[i-1][j]%mod;
                }
            }
        }
        return dp[n][m];
    }
}