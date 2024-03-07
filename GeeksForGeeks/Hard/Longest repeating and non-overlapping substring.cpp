https://www.geeksforgeeks.org/problems/longest-repeating-and-non-overlapping-substring3421/1




class Solution {
  public:
    string longestSubstring(string s, int n) {
        
       vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        int max_length=0;
        int last=0;
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                if(s[i-1]==s[j-1] && dp[i-1][j-1]<(j-i)){
                    dp[i][j]=dp[i-1][j-1]+1;
                    if(max_length<dp[i][j]){
                        max_length=dp[i][j];
                        last=i-1;
                    }
                }
            }
        }
        if(max_length==0)
            return "-1";
        return s.substr(last-max_length+1,max_length);
    }
};