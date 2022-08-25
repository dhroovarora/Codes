https://leetcode.com/problems/first-unique-character-in-a-string/




class Solution {
public:
    int firstUniqChar(string s) {
        int m[26] ={};
        for(int  i=0;i<s.size();i++){
            m[s[i] - 'a']++;
        }
        int i;
        for(i=0;i<s.size();i++){
            if(m[s[i] -'a'] == 1){
                return i;
            }
        }
        return -1;
    }
};