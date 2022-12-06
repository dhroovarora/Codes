https://leetcode.com/problems/detect-capital/




class Solution {
public:
    bool detectCapitalUse(string word) {
        int c = 0;
        int l = 0;
        for(int i=0;i<word.size();i++){
            if(word[i] >= 'A' && word[i] <= 'Z')
                c++;
            else if(word[i] >= 'a' && word[i] <= 'z')
                l++;
        }
        if(c == word.size() || l == word.size() || ((word[0] >= 'A' && word[0] <= 'Z') && l == word.size() - 1))
            return 1;
        return 0;
    }
};