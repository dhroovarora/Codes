https://www.codingninjas.com/codestudio/problems/0-1-knapsack_920542?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=0




#include <bits/stdc++.h> 
int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	// Write your code here
	// if(maxWeight == 0)
	// 	return 0;
	// if(n==1){
	// 	if(maxWeight >= weight[0])
	// 		return value[0];
	// 	return 0;
	// }
	// int notpick = knapsack(weight, value, n-1, maxWeight);
	// int pick = INT_MIN;
	// if(maxWeight >= weight[n-1])
	// 	pick = value[n-1] + knapsack(weight, value, n-1, maxWeight - weight[n-1]);
	// return max(pick,notpick);

	vector<int> dp(maxWeight + 1,0);

	for(int i=weight[0];i<=maxWeight;i++)
		dp[i] = value[0];

	for(int i=1;i<n;i++){
		for(int j=maxWeight;j>=0;j--){
			int notpick = dp[j];
			int pick = INT_MIN;
			if(j >= weight[i])
				pick = value[i] + dp[j - weight[i]];
			dp[j] =  max(pick,notpick);
		}
	}
	return dp[maxWeight];
}