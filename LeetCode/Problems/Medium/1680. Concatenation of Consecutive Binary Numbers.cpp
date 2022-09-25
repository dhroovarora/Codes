https://leetcode.com/problems/concatenation-of-consecutive-binary-numbers/




class Solution {
public:
    int concatenatedBinary(int n) {
        int l = 0;
        int m = 1e9 + 7;
        long ans = 0;
        for(int i=1;i<=n;i++){
            if((i & (i-1)) == 0) l+= 1;
            
            ans = ((ans << l) | i)% m; 
        }
        return ans;
    }
};