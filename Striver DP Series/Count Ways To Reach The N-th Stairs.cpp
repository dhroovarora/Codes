https://www.codingninjas.com/codestudio/problems/count-ways-to-reach-nth-stairs_798650?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=0




#include <bits/stdc++.h>
#define mod 1000000007
int helper(int nStairs, vector<long long> &dp) {
  if (nStairs <= 1)
    return 1;

  if (dp[nStairs] != -1)
    return dp[nStairs];

  return dp[nStairs] =
             (helper(nStairs - 1,dp) + helper(nStairs - 2,dp))%mod;
}
int countDistinctWays(int nStairs) {
    //  Write your code here.

    // DP solution

    vector<long long> dp(nStairs+1,-1);
    return helper(nStairs,dp);

    // iteration will not work for n>45

    // int prev = 1;
    // int curr = 1;
    // for(int i=2;i<=nStairs;i++){
    //     curr += prev;
    //     prev = curr - prev;
    // }
    // return curr;

    // simple recurssion will give tle

    // if(nStairs <= 1)
    //     return  1;
    // return countDistinctWays(nStairs - 1) + countDistinctWays(nStairs - 2);
}