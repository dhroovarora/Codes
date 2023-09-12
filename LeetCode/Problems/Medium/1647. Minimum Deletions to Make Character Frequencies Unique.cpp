https://leetcode.com/problems/minimum-deletions-to-make-character-frequencies-unique/




class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char,int> m;
        for(auto it : s)
            ++m[it];
        unordered_set<int> st;
        int ans = 0;
        for(auto it : m){
            int p = it.second;
            while(!st.empty() && p && st.find(p) != st.end()){
                ++ans;
                --p;
            }
            st.insert(p);
        }
        return ans;
    }
};