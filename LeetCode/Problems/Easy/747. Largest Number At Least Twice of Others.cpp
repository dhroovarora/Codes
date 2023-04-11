https://leetcode.com/problems/largest-number-at-least-twice-of-others/description/




class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxi = *max_element(nums.begin(),nums.end());
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == maxi){
                ans = i;
            }
            else if(nums[i]*2 > maxi){
                return -1;
            }
        }
        return ans;
    }
};