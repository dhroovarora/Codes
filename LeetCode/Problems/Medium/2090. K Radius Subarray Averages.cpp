https://leetcode.com/problems/k-radius-subarray-averages/description/




class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> avg(n, -1);
        if (2*k+1>n) return avg;
        unsigned long long sum=0;
        for(int i=0; i<=2*k; i++){
            sum+=nums[i];
        }
        avg[k]=sum/(2*k+1);
        for(int i=k+1; i<n-k; i++){
            sum+=nums[k+i]-nums[i-k-1];
            avg[i]=sum/(2*k+1);
        }
        return avg;
    }
};