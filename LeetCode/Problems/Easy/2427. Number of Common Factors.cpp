https://leetcode.com/problems/number-of-common-factors/description/




class Solution {
public:
    int commonFactors(int a, int b) {
        int h = min(a,b);
        int count = 0;
        for(int i=1;i<=h;i++){
            if(a%i==0 && b%i==0)
                count++;
        }
        return count;
    }
};