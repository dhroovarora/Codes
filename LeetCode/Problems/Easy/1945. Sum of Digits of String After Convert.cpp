https://leetcode.com/problems/sum-of-digits-of-string-after-convert/




class Solution {
public:
    int getLucky(string s, int k) {
        int n = s.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int j = s[i] - 'a' + 1;
            ans += j/10 + j%10;
        }
        k--;
        while(k--){
            int l = 0;
            while(ans){
                l += ans%10;
                ans /= 10;
            }
            ans = l;
        }
        return ans;
    }
};