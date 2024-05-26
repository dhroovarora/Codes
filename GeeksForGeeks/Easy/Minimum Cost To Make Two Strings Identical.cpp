https://www.geeksforgeeks.org/problems/minimum-cost-to-make-two-strings-identical1107/1




class Solution {

  public:
    int findMinCost(string x, string y, int costX, int costY) {
        // Your code goes here
        int n = x.size();
        int m = y.size();
        vector<vector<int>> dp(n+1,vector<int> (m+1,0));
        
        for(int i = 1;i < n+1; i++){
            for(int j = 1;j < m+1; j++){
                if(x[i-1] == y[j-1]){
                    dp[i][j] = 1+dp[i-1][j-1];
                }else{
                    dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
                }
            }
        }
        return (n-dp[n][m])*costX + (m-dp[n][m])*costY;
    }
};