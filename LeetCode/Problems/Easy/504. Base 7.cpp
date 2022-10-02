https://leetcode.com/problems/base-7/




class Solution {
public:
    string convertToBase7(int num) {
        if(num == 0) return "0";
        string ans = "";
        int n = num;
        num = abs(num);
        while(num){
            ans += (num%7) + '0';
            num /= 7;
        }
        reverse(ans.begin(), ans.end());
        return n > 0 ? ans : "-" + ans;
    }
};