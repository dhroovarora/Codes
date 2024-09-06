https://www.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1




class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(vector<int> &arr) {
        // code here...
        long long sum=0,maxi=arr[0];
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            sum+=(long long )arr[i];
            maxi=max(maxi,sum);
            if(sum<=0)
            sum=0;
        }
        return maxi;
    }
};