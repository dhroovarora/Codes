https://leetcode.com/problems/longest-palindrome/description/




class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<int,int> m;
        for(int i=0;i<s.size();i++)
            m[s[i]]++;
        int ans = 0;
        bool flag = 0;
        for(auto i:m){
            ans += i.second;
            if((i.second)%2){
                ans--;
                flag = 1;
            }
        }
        if(flag)
            return ans+1;
        return ans;
    }
};