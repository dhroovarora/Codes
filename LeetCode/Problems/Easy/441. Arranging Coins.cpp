https://leetcode.com/problems/arranging-coins/




class Solution {
public:
    int arrangeCoins(int n) {

        return sqrt(2l*n + .25) - .5;
    }
};