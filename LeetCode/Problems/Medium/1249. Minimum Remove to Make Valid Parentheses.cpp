https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses/description/?envType=daily-question&envId=2024-04-06




class Solution {
public:
    std::string minRemoveToMakeValid(std::string s) {
        int open = 0, close = 0, flag = 0;
        for (char c : s) {
            if (c == '(') {
                ++open;
                ++flag;
            } else if (c == ')' && flag > 0) {
                ++close;
                --flag;
            }
        }
        int k = min(open, close);
        string ans = "";
        open = k;
        close = k;
        for (char c : s) {
            if (c == '(') {
                if (open > 0) {
                    ans += '(';
                    --open;
                }
                continue;
            }
            if (c == ')') {
                if (close > 0 && close > open) {
                    ans += ')';
                    --close;
                }
                continue;
            } else {
                ans += c;
            }
        }
        return ans;
    }
};