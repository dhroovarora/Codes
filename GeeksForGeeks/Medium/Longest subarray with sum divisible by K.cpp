https://www.geeksforgeeks.org/problems/longest-subarray-with-sum-divisible-by-k1259/1




class Solution{
public:    
    int longSubarrWthSumDivByK(int arr[], int n, int k) {
        unordered_map<int,int> pre;
        int presum = 0;
        int maxi = 0;
        pre[0] = -1;

        for(int i = 0; i < n; i++) {
            presum += arr[i];
            int remainder = (presum % k + k) % k; 

            if(pre.count(remainder))
                maxi = max(maxi, i - pre[remainder]);

            else
                pre[remainder] = i;
        }

        return maxi;
    }
};