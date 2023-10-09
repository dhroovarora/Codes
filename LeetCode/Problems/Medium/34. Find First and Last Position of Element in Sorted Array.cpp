https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/




class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1;
        int last = -1;
        int i = 0,j = nums.size() - 1;
        while(i<=j){
            int m = i + (j-i)/2;
            if(nums[m] == target){
                first = m;
                j = m - 1;
            }
            else if(nums[m] > target)
                j = m - 1;
            else
                i = m + 1;
        }
        i = 0;
        j = nums.size() - 1;
        while(i<=j){
            int m = i + (j-i)/2;
            if(nums[m] == target){
                last = m;
                i = m + 1;
            }
            else if(nums[m] > target)
                j = m - 1;
            else
                i = m + 1;
        }
        return {first,last};
    }
};