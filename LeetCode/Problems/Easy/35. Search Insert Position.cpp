https://leetcode.com/problems/search-insert-position/




class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i = 0;
        int n = nums.size();
        int j = n-1;
        // if(target > nums[j]){
        //     return n;
        // }
        while(i<=j){
            int mid = i + (j - i)/2;
            if(nums[mid] == target){
                return mid ;
            }
            else if(nums[mid] > target){
                j = mid - 1;
            }
            else{
                i = mid + 1;
            }
        }
        return i;
    }
};