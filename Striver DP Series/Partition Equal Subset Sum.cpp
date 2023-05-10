https://www.codingninjas.com/codestudio/problems/partition-equal-subset-sum_892980?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=0




bool helper(int n,vector<int> &arr,int sum,int target){

	if(target == sum)
		return 1;
	if(n==0){
		if(target + arr[0] == sum - arr[0])
			return 1;
		return 0;
	}
	bool notpick = helper(n-1,arr,sum,target);
	bool pick = 0;
	if(sum - arr[n] >= target + arr[n])
		pick = helper(n-1,arr,sum - arr[n],target + arr[n]);
	return pick | notpick;
}

bool canPartition(vector<int> &arr, int n)
{
	// Write your code here.
	int sum = 0;
	for(int i=0;i<n;i++)
		sum += arr[i];
	
	if(sum%2)
		return 0;
	// return helper(n-1,arr,sum,0);

	sum /= 2;
	vector<bool> dp(sum,0);
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
    return dp[sum];
}