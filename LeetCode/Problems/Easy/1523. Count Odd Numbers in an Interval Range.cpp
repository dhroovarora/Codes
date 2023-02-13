https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/description/




class Solution {
public:
    int countOdds(int low, int high) {
        int ans = 0;
        for(int i=low;i<=high;i++)
            (i%2) ? ans++ : 0;
        return ans;
    }
};