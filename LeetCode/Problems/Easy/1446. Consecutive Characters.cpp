https://leetcode.com/problems/consecutive-characters/description/




class Solution {
public:
    int maxPower(string s) {
        int ans = 0;
        for(int i=0;i<s.size();i++){
            char a = s[i];
            i++;
            int c = 1;
            while(i<s.size() && s[i] == a){
                c++;
                i++;
            }
            i--;
            ans = max(ans,c);
        }
        return ans;
    }
};