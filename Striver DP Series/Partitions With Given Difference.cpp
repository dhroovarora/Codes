https://www.codingninjas.com/codestudio/problems/partitions-with-given-difference_3751628?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos




#include <bits/stdc++.h> 
int mod = 1e9 + 7;
int findWays(vector<int> &num, int tar)
{
    // Write your code here.
    int ans = 0;
    int n = num.size();
	vector<int> dp(tar+1,0) , temp(tar+1,0);
    dp[0] = 1;
    if(num[0] <= tar)
        dp[num[0]] += 1;
    for(int i=1;i<n;i++){
        for(int j=0;j<=tar;j++){
            int notpick = dp[j];
            int pick = 0;
            if(j >= num[i])
                pick = dp[j-num[i]];
            temp[j] = (pick + notpick)%mod;
        }
        dp = temp;
    }
    return dp[tar];
}

int countPartitions(int n, int d, vector<int> &arr) {
    // Write your code here.
    int sum = 0;
    for(int i=0;i<n;i++)
        sum += arr[i];
    if(sum < d || (sum - d)%2)
        return 0;

    return findWays(arr,(sum-d)/2);
}