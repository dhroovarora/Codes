https://leetcode.com/problems/smallest-range-i/




class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) {
        return max(0, *max_element(begin(A), end(A)) - 2*K - *min_element(begin(A), end(A)));
    }
};