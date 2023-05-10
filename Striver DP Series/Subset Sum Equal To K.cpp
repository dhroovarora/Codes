https://www.codingninjas.com/codestudio/problems/subset-sum-equal-to-k_1550954?leftPanelTab=0&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos




#include <bits/stdc++.h> 
bool subsetSumToK(int n, int k, vector<int> &arr) {
    // Write your code here.
    // vector<vector<bool>> dp(n,vector<bool>(k+1,0));
    // // if(k==0)
    // //     return 1;
    // for(int i=0;i<n;i++)
    //     dp[i][0] = 1;

    // // if (n == 1) {
    // //   if (arr[n - 1] == k)
    // //     return dp[1;
    // //   return 0;
    // // }
    // if(arr[0] <= k)
    //     dp[0][arr[0]] = 1;
    // for(int i=1;i<n;i++){
    //     for(int j=1;j<=k;j++){
    //         // bool notpick = subsetSumToK(n-1,k,arr);
    //         bool notpick = dp[i-1][j];
    //         bool pick = 0;
    //         if(j >= arr[i]){
    //             // pick = subsetSumToK(n-1,k - arr[n-1],arr);
    //             pick = dp[i-1][j-arr[i]];
    //         }
    //         dp[i][j] = pick | notpick;
    //     }
    // }
    // return dp[n-1][k]; 

    //SPACE OPTIMIZATION

    vector<bool> dp(k+1,0);
    dp[0] = 1;
    if(arr[0] <= k)
        dp[arr[0]] = 1;

    for(int i=1;i<n;i++){
        vector<bool> temp(k+1,1);
        for(int j=1;j<=k;j++){
            bool notpick = dp[j];
            bool pick = 0;
            if(j >= arr[i])
                pick = dp[j-arr[i]];
            temp[j] = pick | notpick;
        }
        dp = temp;
    }
    return dp[k];
}