https://www.codingninjas.com/codestudio/problems/maximum-sum-of-non-adjacent-elements_843261?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=1




#include <bits/stdc++.h> 

// memoization

// int helper(int n,vector<int> nums,vector<int> &dp){

//     if(n==0)
//         return nums[0];
//     if(n<0)
//         return 0;
//     if(dp[n] != -1)
//         return dp[n];
//     int pick = nums[n] + helper(n-2,nums,dp);
//     int notpick = helper(n-1,nums,dp);
//     return dp[n] = max(pick,notpick);
// }

// recurssion

// int helper(int n,vector<int> nums){
//     if(n==0)
//         return nums[0];
//     if(n<0)
//         return 0;
//     int pick = nums[n] + helper(n-2,nums);
//     int notpick = helper(n-1,nums);
//     return max(pick,notpick);
// }
int maximumNonAdjacentSum(vector<int> &nums) {
  // Write your code here.
  // recurssion;
  // return helper(nums.size()-1,nums);

  // using memoization;

  // vector<int> dp(nums.size(), -1);
  // return helper(nums.size() - 1, nums, dp);

    // using Tabulation

    // vector<int> dp(nums.size(),-1);
    // dp[0] = nums[0];
    // for(int i=1;i<nums.size();i++){
    //     int pick = nums[i];
    //     if(i>1)
    //         pick += dp[i-2];
    //     int notpick = dp[i-1];
    //     dp[i] = max(pick,notpick);
    // }
    // return dp[nums.size() - 1];

    // BEST solution reducing space complexity

    int prev = nums[0];
    int prev2 = 0;
    for(int i=1;i<nums.size();i++){
        int pick = nums[i];
        if(i>1)
            pick += prev2;
        int notpick = prev;
        int curr = max(pick,notpick);
        prev2 = prev;
        prev = curr;
    }
    return prev;
}