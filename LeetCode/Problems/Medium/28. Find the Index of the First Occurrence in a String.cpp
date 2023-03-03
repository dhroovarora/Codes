https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/




class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack == needle)
            return 0;
        if(needle.size() > haystack.size())
            return -1;
        for(int i=0;i<haystack.size() - needle.size() + 1;i++){
            string k = haystack.substr(i,needle.size());

            if(k == needle)
                return i;
        }
        return -1;
    }
};