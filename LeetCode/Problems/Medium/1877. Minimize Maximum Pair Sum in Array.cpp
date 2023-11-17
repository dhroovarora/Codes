https://leetcode.com/problems/minimize-maximum-pair-sum-in-array/description/?envType=daily-question&envId=2023-11-17




class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int ans = INT_MIN;
        for(int i=0;i<n/2;++i)
            ans = max(ans,nums[i] + nums[n-i-1]);
        return ans;
    }
};