https://leetcode.com/problems/climbing-stairs/description/




class Solution {
public:
    int climbStairs(int n) {
        int a = 1, b = 1;
        while (--n){
            b += a;
            a = b - a;
        }
        return b;
    }
};