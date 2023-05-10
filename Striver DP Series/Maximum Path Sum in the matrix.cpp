https://www.codingninjas.com/codestudio/problems/maximum-path-sum-in-the-matrix_797998?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=0




#include <bits/stdc++.h> 

// int helper(int i,int j,int n,int m,vector<vector<int>> &matrix){
//     if(i==n-1)
//         return matrix[i][j];
//     int down = INT_MIN , down_left = INT_MIN , down_right = INT_MIN;
//     down = helper(i+1,j,n,m,matrix);
//     if(j>0)
//         down_left = helper(i+1,j-1,n,m,matrix);
//     if(j<m-1)
//         down_right = helper(i+1,j+1,n,m,matrix);
//     return matrix[i][j] + max(down,max(down_left,down_right));
// }

int getMaxPathSum(vector<vector<int>> &matrix)
{
    //  Write your code here.
    int n = matrix.size();
    int m = matrix[0].size();
    
    // Recurssion

    // int ans = INT_MIN;
    // for(int i=0;i<m;i++)
    //     ans = max(ans,helper(0,i,n,m,matrix));
    // return ans;

    //SPACE OPTIMIZED BEST SOLUTION

    vector<int> dp(m,0);
    for(int j=0;j<m;j++)
        dp[j] = matrix[n-1][j];
    for(int i = n-2;i>=0;i--){
        vector<int> temp(m,INT_MIN);
        for(int j=m-1;j>=0;j--){
            int down = INT_MIN , down_left = INT_MIN , down_right = INT_MIN;
            down = dp[j];
            if(j>0)
                down_left = dp[j-1];
            if(j<m-1)
                down_right = dp[j+1];
            temp[j] = matrix[i][j] + max(down,max(down_left,down_right));
        }
        dp = temp;
    }
    return *max_element(dp.begin(),dp.end());
}