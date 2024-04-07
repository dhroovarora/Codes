https://www.geeksforgeeks.org/problems/maximize-dot-product2649/1




class Solution{
		
	public:
	int solve(int idx1, int idx2, int n, int m, int a[], int b[], vector<vector<int>>&dp){
	    if(idx2>=m) return 0;
	    if(idx1>=n && idx2 <m) return INT_MIN;
	    
	    if(dp[idx1][idx2]!=-1) return dp[idx1][idx2];
	    
	    int take = (a[idx1]*b[idx2]) + solve(idx1+1, idx2+1, n, m, a, b, dp);
	    
	    int notTake = solve(idx1+1, idx2, n, m, a, b, dp);
	    
	    return dp[idx1][idx2]= max(take, notTake);
	}
	int maxDotProduct(int n, int m, int a[], int b[]) 
	{ 
	    vector<vector<int>> dp(n, vector<int>(m, -1));
		int ans = solve(0, 0, n, m, a, b, dp);
		
		return ans;
	} 
};