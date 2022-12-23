https://leetcode.com/problems/hamming-distance/description/




class Solution {
public:
    int hammingDistance(int x, int y) {
        int sum = 0;
        while(x||y){
            if(x%2!=y%2)
                sum++;
        x = (x - x % 2) / 2;
        y = (y - y % 2) / 2;
        }
        return sum;

        // __builtin_popcount(x^y);
    }
};