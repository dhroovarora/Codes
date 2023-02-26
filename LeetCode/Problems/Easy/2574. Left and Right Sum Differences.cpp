https://leetcode.com/problems/left-and-right-sum-differences/




class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
        }
        int temp = 0;
        for(int i=0;i<nums.size();i++){
            temp += nums[i];
            int k = nums[i];
            nums[i] = abs(sum - temp);
            sum -= k;
        }
        return nums;
    }
};