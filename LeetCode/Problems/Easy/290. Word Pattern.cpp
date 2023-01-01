https://leetcode.com/problems/word-pattern/description/




class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> v;
        string word;
        stringstream temp(s);
        while (temp >> word)
            v.push_back(word);

        if (pattern.size() != v.size())
            return false;

        unordered_map<char, string> mp;
        unordered_map<string, char> m;

        for(int i=0; i<v.size(); i++){
            if(mp.find(pattern[i]) != mp.end() && mp[pattern[i]] != v[i]) 
                return false;

            else if(m.find(v[i]) != m.end() && m[v[i]] != pattern[i]) 
                return false;

            mp[pattern[i]] = v[i];
            m[v[i]] = pattern[i];
        }

        return true;
    }
};