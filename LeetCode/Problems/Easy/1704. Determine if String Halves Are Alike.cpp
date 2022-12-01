https://leetcode.com/problems/determine-if-string-halves-are-alike/




class Solution {
public:
    bool halvesAreAlike(string s) {
        int length = s.size();
        int count = 0;
        for(int i=0;i<length/2;i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' )
                count++;
        }
        for(int i=length/2;i<length;i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' )
                count--;
        }
        if(count == 0)
            return 1;
        return 0;
    }
};