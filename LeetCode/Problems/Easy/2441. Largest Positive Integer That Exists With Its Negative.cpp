https://leetcode.com/problems/largest-positive-integer-that-exists-with-its-negative/description/?envType=daily-question&envId=2024-05-02




class Solution {
public:
    int findMaxK(vector<int>& nums) {
      int res = -1;
        std::unordered_set<int> numSet(nums.begin(), nums.end());
        for (int num : numSet) {
            if (numSet.find(-num) != numSet.end()) {
                res = std::max(res, num);
            }
        }
        return res;
    }
};