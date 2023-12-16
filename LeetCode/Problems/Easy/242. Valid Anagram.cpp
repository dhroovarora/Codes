https://leetcode.com/problems/valid-anagram/description/?envType=daily-question&envId=2023-12-16




class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
            return 0;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s == t;
    }
};