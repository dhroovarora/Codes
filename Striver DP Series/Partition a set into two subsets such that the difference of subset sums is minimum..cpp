https://www.codingninjas.com/codestudio/problems/partition-a-set-into-two-subsets-such-that-the-difference-of-subset-sums-is-minimum_842494?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=0




#include <bits/stdc++.h> 

int minSubsetSumDifference(vector<int>& arr, int n)
{
	// Write your code here.
	int sum = 0;
	for(int i=0;i<n;i++)
		sum += arr[i];
	vector<bool> dp(sum+1,0);
    dp[0] = 1;
    if(arr[0] <= sum)
        dp[arr[0]] = 1;

    for(int i=1;i<n;i++){
        vector<bool> temp(sum+1,1);
        for(int j=1;j<=sum;j++){
            bool notpick = dp[j];
            bool pick = 0;
            if(j >= arr[i])
                pick = dp[j-arr[i]];
            temp[j] = pick | notpick;
        }
        dp = temp;
    }

	int ans = 1e9;
    for(int i=0;i<=sum/2;i++){
		if(dp[i])
			ans = min(ans,abs( (sum - i) - i));
	}
	return ans;
}
