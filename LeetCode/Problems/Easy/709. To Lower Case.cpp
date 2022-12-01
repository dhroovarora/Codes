https://leetcode.com/problems/to-lower-case/




class Solution {
public:
    string toLowerCase(string s) {
        for(char& c:s)
            if(c <= 'Z' && c >= 'A')
                c += 32;
        return s;
    }
};