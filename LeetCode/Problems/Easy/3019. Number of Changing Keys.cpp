https://leetcode.com/problems/number-of-changing-keys/description/




class Solution {
public:
    int countKeyChanges(string s) {
        char prev = tolower(s[0]);
        int ans = 0;
        for(int i=1;i<s.size();++i){
            if(tolower(s[i]) != prev){
                ++ans;
                prev = tolower(s[i]);
            }
        }
        return ans;
    }
};