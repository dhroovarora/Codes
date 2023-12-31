https://leetcode.com/problems/largest-substring-between-two-equal-characters/?envType=daily-question&envId=2023-12-31




class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        unordered_map<char,int> m;
        int ans = -1;
        for(int i=0;i<s.size();++i){
            if(m.contains(s[i])){
                ans = max(ans,i - m[s[i]] - 1);
            }
            else{
                m[s[i]] = i;
            }
        }
        return ans;
    }
};