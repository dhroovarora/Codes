https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/description/




class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> d;
        for(int i=0;i<s.size();i++){
            if(d.size() == 0)
                d.push(s[i]);
            else if(d.top() == s[i]){
                d.pop();
            }
            else{
                d.push(s[i]);
            }
        }
        string ans = "";
        while(d.size() != 0){
            ans += d.top();
            d.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};