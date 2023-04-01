https://leetcode.com/problems/isomorphic-strings/description/




class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.size();
        int p = t.size();
        if(n != p)
            return 0;
        unordered_map<char,char> m,z;
        for(int i=0;i<n;i++){
            if(m.find(s[i]) != m.end()){
                if(m[s[i]] != t[i])
                    return 0;
            }
            if(z.find(t[i]) != z.end()){
                if(z[t[i]] != s[i])
                    return 0;
            }
            m[s[i]] = t[i];
            z[t[i]] = s[i];
        }
        return 1;
    }
};