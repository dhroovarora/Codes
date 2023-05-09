https://www.codingninjas.com/codestudio/problems/ninja-and-his-friends_3125885?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=0




#include <bits/stdc++.h> 
// int helper(int i,int j1,int j2,int r,int c,vector<vector<int>> &grid, vector<vector<vector<int>>> &dp){
//     if(j1<0 || j1>=c || j2<0 || j2>=c)
//         return -1e8;
//     if(i==r-1){
//         if(j1 == j2)
//             return dp[i][j1][j2] = grid[i][j1];
//         return dp[i][j1][j2] = grid[i][j1] + grid[i][j2];
//     }
//     if(dp[i][j1][j2] != -1)
//         return dp[i][j1][j2];

//     int ans = 0;
//     for(int p=-1;p<=1;p++){
//         for(int o=-1;o<=1;o++){
//             int value = 0;
//             if(j1 == j2)
//                 value = grid[i][j1];
//             else
//                 value = grid[i][j1] + grid[i][j2];
//             value +=  helper(i+1,j1+p,j2+o,r,c,grid,dp);
//             ans = max(ans,value);
//         }
//     }
//     return dp[i][j1][j2] = ans;
// }
int maximumChocolates(int r, int c, vector<vector<int>> &grid) {
  // Write your code here.
  // Memoization
//   vector<vector<vector<int>>> dp(r, vector<vector<int>>(c, vector<int> (c,-1)));
//   return helper(0, 0, c - 1, r, c, grid,dp);

    vector<vector<int>> dp(c, vector<int> (c,-1));
    for(int j1=0;j1<c;j1++){
        for(int j2=0;j2<c;j2++){
            if(j1 == j2)
                dp[j1][j2] = grid[r-1][j1];
            else
                dp[j1][j2] = grid[r-1][j1] + grid[r-1][j2];
        }
    }
    for(int i=r-2;i>=0;i--){
        vector<vector<int>> temp(c, vector<int> (c,-1));
        for(int j1=0;j1<c;j1++){
            for(int j2=0;j2<c;j2++){
                int ans = 0;
                for(int p=-1;p<=1;p++){
                    for(int o=-1;o<=1;o++){
                        int value = 0;
                        if(j1 == j2)
                            value = grid[i][j1];
                        else
                            value = grid[i][j1] + grid[i][j2];
                        if(j1+p >= 0 && j1+p < c && j2+o >= 0 && j2+o < c)
                            value += dp[j1+p][j2+o];
                        ans = max(ans,value);
                    }
                }
                temp[j1][j2] = ans;
            }
        }
        dp = temp;
    }
    return dp[0][c-1];
}