https://www.codingninjas.com/codestudio/problems/frog-jump_3621012?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=1




#include <bits/stdc++.h> 

// int helper(int n,vector<int> &heights,vector<int> &dp){
//     if(n==0)
//         return 0;
//     if(dp[n] != -1)
//         return dp[n];
//     int one =  helper(n-1, heights,dp) + abs(heights[n] - heights[n-1]);
//     if(n == 1)
//         return dp[1] = one;
//     int two = helper(n-2, heights,dp) + abs(heights[n] - heights[n-2]);
//     return dp[n] = min(one,two);

// }

int frogJump(int n, vector<int> &heights,int k = 2)
{
    // Write your code here.

    // Best Space optimized solution
    int prev2 = 0;
    int prev = 0;
    for(int i=1;i<n;i++){
        int one = prev + abs(heights[i] - heights[i-1]);
        if(i==1){
            prev2 = prev;
            prev = one;
            continue;
        }
        int two = prev2 + abs(heights[i] - heights[i-2]);
        int curr = min(one,two);
        prev2 = prev;
        prev = curr;
    }
    return prev;

    // Tabulation method
    
    // vector<int> dp(n,0);
    // for(int i=1;i<n;i++){
    //     int one = dp[i-1] + abs(heights[i] - heights[i-1]);
    //     if(i==1){
    //         dp[i] = one;
    //         continue;
    //     }
    //     int two = dp[i-2] + abs(heights[i] - heights[i-2]);
    //     dp[i] = min(one,two);
    // }
    // return dp[n-1];



    // Memoization method

    // vector<int> dp(n,-1);
    // return helper(n-1,heights,dp);


    // recurssion solution giving tle

    // if(n == 1)
    //     return 0;
    // int one =  frogJump(n-1, heights) + abs(heights[n-1] - heights[n-2]);
    // if(n == 2)
    //     return one;
    // int two = frogJump(n-2, heights) + abs(heights[n-1] - heights[n-3]);
    // return min(one,two);


    // the follow up question by striver tabulation method
    // vector<int> dp(n,0);
    // for(int i=1;i<n;i++){
    //     int p = 1;
    //     int ans = INT_MAX;
    //     while(p <= i && p <= k){
    //         ans = min(ans,dp[i-p] + abs(heights[i] - heights[i-p]));
    //         p++;
    //     }
    //     dp[i] = ans;
    // }
    // return dp[n-1];
}