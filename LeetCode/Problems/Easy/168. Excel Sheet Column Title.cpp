https://leetcode.com/problems/excel-sheet-column-title/description/




class Solution {
public:
    string convertToTitle(int n) {
        if(n < 27)
            return string(1,'A' + (n-1)%27);
        string ans = "";
        while(n){
            if(n % 26 == 0){
                ans += 'A' + 25;
                --n;
            }
            else
                ans += 'A' + n%26 - 1;
            n /= 26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};