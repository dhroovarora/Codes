https://www.geeksforgeeks.org/problems/minimal-cost/1




int find(const std::vector<int> &arr, std::vector<int> &dp, int k, int idx) {
    if (idx == 0) return 0;
    if (dp[idx] != -1) return dp[idx];

    int minCost = INT_MAX;
    for (int count = 1; count <= k && (idx - count) >= 0; ++count) {
        minCost = min(minCost, find(arr, dp, k, idx - count) + abs(arr[idx - count] - arr[idx]));
    }
    dp[idx] = minCost;
    return dp[idx];
}

class Solution {
public:
    int minimizeCost(int k, std::vector<int>& arr) {
        int n = arr.size();
        vector<int> dp(n, -1);
        return find(arr, dp, k, n - 1);
    }
};