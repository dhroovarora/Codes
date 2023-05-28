https://leetcode.com/problems/extra-characters-in-a-string/description/




class Solution {
public:
    int minExtraChar(string s, vector<string>& dictionary) {
        set<string> st;
        int n = s.size();
        int m = dictionary.size();
        for(auto it: dictionary)
            st.insert(it);
        vector<int> dp(n+1,0);
        for(int i=1;i<=n;i++){
            dp[i] = dp[i-1] + 1;
            for(int j=i;j >= 1;j--){
                string sub = s.substr(j-1,i - j + 1);
                if(st.find(sub) != st.end())
                    dp[i] = min(dp[i],dp[j-1]);
            }
        }
        return dp[n];
    }
};