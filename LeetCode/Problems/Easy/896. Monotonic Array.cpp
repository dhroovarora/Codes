https://leetcode.com/problems/monotonic-array/?envType=daily-question&envId=2023-09-29




class Solution {
public:
    bool isMonotonic(std::vector<int>& nums) {
        if (nums.size() < 2) return true;

        int direction = 0;  // 0 means unknown, 1 means increasing, -1 means decreasing

        for (size_t i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i-1]) {  // increasing
                if (direction == 0) 
                    direction = 1;
                else if (direction == -1) 
                    return false;
            } else if (nums[i] < nums[i-1]) {  // decreasing
                if (direction == 0) 
                    direction = -1;
                else if (direction == 1) 
                    return false;
            }
        }
        return true;
    }
};