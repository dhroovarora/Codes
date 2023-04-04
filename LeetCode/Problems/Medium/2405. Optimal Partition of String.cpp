https://leetcode.com/problems/optimal-partition-of-string/description/




class Solution {
public:
    int partitionString(string s) {
        unordered_map<int,int> m;
        int ans = 1;
        for(int i=0;i<s.size();i++){
            if(m[s[i]]){
                ans++;
                m.clear();
            }
            m[s[i]]++;
        }
        return ans;
    }
};