https://leetcode.com/problems/single-number/




class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int dhroov =0;
        for(int i=0;i<nums.size();i++)
            dhroov = dhroov^nums[i];
        return dhroov;
    }
};