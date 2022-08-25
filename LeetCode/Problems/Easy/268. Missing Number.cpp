https://leetcode.com/problems/missing-number/




class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int a =0,dhroov=0;
        for(int i=0;i<nums.size();i++){
            a += nums[i];
            dhroov+=i;
        }
        dhroov +=nums.size();
        return dhroov - a;
    }
};