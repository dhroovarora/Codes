https://www.codingninjas.com/codestudio/problems/minimum-path-sum_985349?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=1




#include <bits/stdc++.h> 
int minSumPath(vector<vector<int>> &grid) {
    // Write your code here.
    int n = grid.size();
    int m = grid[0].size();
    vector<int> dp(m,0);
    for(int i=0;i<n;i++){
        vector<int> temp(m,0);
        for(int j=0;j<m;j++){
            if(i==0 && j==0){
                temp[j] = grid[i][j];
            }
            else{
                int down = INT_MAX , right = INT_MAX;
                if(i > 0)
                    down = dp[j];
                if (j > 0) 
                    right = temp[j-1];   
                temp[j] = grid[i][j] + min(down,right);
            }
        }
        dp = temp;
    }
    return dp[m-1];
}