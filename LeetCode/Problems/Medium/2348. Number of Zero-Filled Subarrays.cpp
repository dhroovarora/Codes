https://leetcode.com/problems/number-of-zero-filled-subarrays/description/




class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans = 0;
        long long k = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 0){
                k++;
                ans += k;
            }
            else
                k = 0;
        }
        return ans;
    }
};