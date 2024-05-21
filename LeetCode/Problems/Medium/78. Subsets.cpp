https://leetcode.com/problems/subsets/description/?envType=daily-question&envId=2024-05-21




class Solution {
public:
    std::vector<std::vector<int>> subsets(std::vector<int>& nums) {
        std::vector<std::vector<int>> res;
        std::vector<int> op;
        solve(nums, 0, op, res);
        return res;
    }
    
    void solve(std::vector<int>& nums, int start, std::vector<int>& op, std::vector<std::vector<int>>& res) {
        if (nums.size() == start) {
            res.push_back(op);
            return;
        }
        
        solve(nums, start + 1, op, res);
        op.push_back(nums[start]);
        solve(nums, start + 1, op, res);
        op.pop_back();
    }
};