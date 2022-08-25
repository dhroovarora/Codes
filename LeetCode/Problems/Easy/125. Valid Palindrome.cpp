https://leetcode.com/problems/valid-palindrome/




class Solution {
public:
    bool isPalindrome(string s) {
        string d = "";
        for(int i=0;i<s.size();i++){
            if(s[i] >64 && s[i] <91){
                d += (s[i] + 32);
            }
            if((s[i]>96 && s[i] < 123) || (s[i] >47 && s[i] < 58)) {
                d += s[i];
            }
        }
        string g = d;
        reverse(d.begin(),d.end());
        if(g==d){
            return 1;
        }
        else{
            return 0;
        }
    }
};