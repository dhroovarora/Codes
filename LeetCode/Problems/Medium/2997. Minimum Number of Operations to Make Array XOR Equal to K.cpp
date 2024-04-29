https://leetcode.com/problems/minimum-number-of-operations-to-make-array-xor-equal-to-k/description/?envType=daily-question&envId=2024-04-29




class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int ans = 0;
        for(auto it : nums) 
            ans ^= it;
        ans ^= k;
        return __builtin_popcount(ans);
    }
};