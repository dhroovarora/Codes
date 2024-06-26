https://leetcode.com/problems/special-array-with-x-elements-greater-than-or-equal-x/description/?envType=daily-question&envId=2024-05-27




class Solution {
public:
    int specialArray(vector<int>& nums) {
        int bucket[1001] = {0};
        for (int num : nums) {
            bucket[num]++;
        }
        int total = nums.size();
        for (int i = 0; i < 1001; i++) {
            if (i == total) {
                return i;
            }
            total -= bucket[i];
        }
        return -1;
    }
};