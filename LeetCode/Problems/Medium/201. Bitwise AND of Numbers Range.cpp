https://leetcode.com/problems/bitwise-and-of-numbers-range/description/?envType=daily-question&envId=2024-02-21




class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        if (left==0) return 0;
        if (__builtin_clz(left)!=__builtin_clz(right))
            return 0;
        while(right>left){
            right&=(right-1);
        }
        return right;
    }
};