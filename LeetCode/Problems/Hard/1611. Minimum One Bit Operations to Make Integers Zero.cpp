https://leetcode.com/problems/minimum-one-bit-operations-to-make-integers-zero/submissions/?envType=daily-question&envId=2023-11-30




class Solution {
public:
    int minimumOneBitOperations(int n) {
        if (n <= 1) 
            return n;
        int count = 0;
        while ((1<<count) <= n)
            ++count;
        return ((1<<count)-1) - minimumOneBitOperations(n-(1<<(count-1)));
    }
};