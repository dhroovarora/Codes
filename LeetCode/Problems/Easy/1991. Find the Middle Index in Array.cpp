https://leetcode.com/problems/find-the-middle-index-in-array/




class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum = 0;
        int temp = 0;
        for(int i=0;i<nums.size();i++)
            sum += nums[i];
        for(int i=0;i<nums.size();i++){
            sum -= nums[i];
            if(temp == sum)
                return i;
             temp += nums[i];
        }
        return -1;
    }
};