https://leetcode.com/contest/weekly-contest-361/problems/count-of-interesting-subarrays/




class Solution {
public:
    long long countInterestingSubarrays(vector<int>& nums, int modulo, int k) {
        unordered_map<int, int> pre;
        long long ans = 0;
        int curr = 0;

        pre[0] = 1;

        for (int n : nums) {
            if (n % modulo == k) {
                curr += 1;
            }
            ans += pre[(curr - k + modulo) % modulo];
            pre[curr % modulo] += 1;
        }

        return ans;
    }
};