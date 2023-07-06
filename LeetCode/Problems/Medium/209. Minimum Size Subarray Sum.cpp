https://leetcode.com/problems/minimum-size-subarray-sum/




class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0,j=0,ans = INT_MAX,sum = 0;
        while(j<nums.size()){
            sum += nums[j];
            while(sum >= target){
                sum -= nums[i];
                ans = min(ans,j-i+1);
                ++i;
            }
            ++j;
        }
        if(ans == INT_MAX)
            return 0;
        return ans;
    }
};