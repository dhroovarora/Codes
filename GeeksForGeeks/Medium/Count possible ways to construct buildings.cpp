https://www.geeksforgeeks.org/problems/count-possible-ways-to-construct-buildings5007/1




class Solution{
	public:
	    long long  int mod =1000000007 ;
        int recsolve(int N , int pos, vector<int> &dp ){     
            if(pos>=N)
                return 1 ;
            if(dp[pos]!=-1)
                return dp[pos];
            int take = recsolve(N,pos+2,dp)%mod;
            int notake = recsolve(N,pos+1,dp)%mod;
            dp[pos]=(take + notake)%mod;
            return dp[pos];
        }
    int TotalWays(int N){
        vector<int> dp(N,-1);
        long long int a = recsolve(N,0,dp)%mod;
        return (a*a)%mod;
    }
};