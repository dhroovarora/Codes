https://leetcode.com/problems/is-subsequence/description/?envType=daily-question&envId=2023-09-22




class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        for(int j=0;j<t.size();++j){
            if(i == s.size())
                return 1;
            if(t[j] == s[i])
                ++i;
        }
        if(i == s.size())
            return 1;
        return 0;
    }
};