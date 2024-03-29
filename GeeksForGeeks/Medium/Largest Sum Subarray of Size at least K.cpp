https://www.geeksforgeeks.org/problems/largest-sum-subarray-of-size-at-least-k3121/1




class Solution{
public:    
    long long int maxSumWithK(long long int a[], long long int n, long long int k) {
 
    int maxSum[n];
    maxSum[0] = a[0];

    int curr_max = a[0];
    for (int i = 1; i < n; i++)
    {
        curr_max = max(a[i], curr_max+a[i]);
        maxSum[i] = curr_max;
    }
 
    int sum = 0;
    for (int i = 0; i < k; i++)
        sum += a[i];
 
    int result = sum;
    for (int i = k; i < n; i++)
    {
        sum = sum + a[i] - a[i-k];

        result = max(result, sum);

        result = max(result, sum + maxSum[i-k]);
    }
    return result;
    }
};