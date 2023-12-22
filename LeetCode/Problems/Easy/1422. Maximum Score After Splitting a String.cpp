https://leetcode.com/problems/maximum-score-after-splitting-a-string/?envType=daily-question&envId=2023-12-22




class Solution {
public:
    int maxScore(string s) {
        int zero = 0,one=0;
        for(auto it : s){
            if(it == '1')
                ++one;
        }
        int ans = 0;
        for(int i=0;i<s.size()-1;++i){
            if(s[i] == '1')
                --one;
            else
                ++zero;
            ans = max(ans,zero + one);
        }
        return ans;
    }
};