https://www.codingninjas.com/codestudio/problems/total-unique-paths_1081470?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=1




#include <bits/stdc++.h> 
// int helper(int m,int n,vector<vector<int>> &dp){
// 	if(m==0 || n==0)
// 		return dp[m][n] = 1;
// 	if(dp[m][n] != -1)
// 		return dp[m][n];
// 	int a = 0;
// 	int b = 0;
// 	if(m!=0)
// 		a = helper(m-1,n,dp);
// 	if(n!=0)
// 		b = helper(m,n-1,dp);
// 	return dp[m][n] = a + b;
// }

int uniquePaths(int m, int n) {
	// Write your code here.

	// USING RECURSSION

	// if(m==1 || n==1)
	// 	return 1;
	// int a = 0;
	// int b = 0;
	// if(m!=1)
	// 	a = uniquePaths(m-1,n);
	// if(n!=1)
	// 	b = uniquePaths(m,n-1); 
	// return a + b;

	// USING MEMOIZATION

	// vector<vector<int>> dp(m,vector<int> (n,-1));
	// return helper(m-1,n-1,dp);

	// USING TABULATION

	// vector<vector<int>> dp(m,vector<int> (n,-1));

	// for(int i=0;i<m;i++){
	// 	for(int j=0;j<n;j++){
	// 		if(i==0 || j==0)
	// 			dp[i][j] = 1;
	// 		else{
	// 			dp[i][j] = dp[i-1][j] + dp[i][j-1];
	// 		}	
	// 	}
	// }
	// return dp[m-1][n-1];

	// BEST METHOD SPACE OPTIMIZATION

	vector<int> dp(n,0);

	for(int i=0;i<m;i++){
		vector<int> temp(n,0);
		for(int j=0;j<n;j++){
			if(i==0 || j==0)
				temp[j] = 1;
			else{
				temp[j] = dp[j] + temp[j-1];
			}
		}
		dp = temp;
	}
	return dp[n-1];
}