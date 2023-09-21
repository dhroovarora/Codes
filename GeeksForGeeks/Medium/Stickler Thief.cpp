https://practice.geeksforgeeks.org/problems/stickler-theif-1587115621/1




class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int helper(int arr[],int n,vector<int>& dp){
        if(n==0)
            return arr[0];
        if(dp[n] != -1)
            return dp[n];
        int pick = arr[n] + helper(arr,n-2,dp);
        int notpick = helper(arr,n-1,dp);
        
        return dp[n] = max(pick,notpick);
    }
    int FindMaxSum(int arr[], int n)
    {
        // Your code here
        vector<int> dp(n,-1);
        return helper(arr,n-1,dp);
    }
};