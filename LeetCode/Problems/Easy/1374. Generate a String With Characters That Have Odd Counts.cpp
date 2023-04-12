https://leetcode.com/problems/generate-a-string-with-characters-that-have-odd-counts/description/




class Solution {
public:
    string generateTheString(int n) {
        string ans = "";
        if(n%2){
            while(n--){
                ans += 'd';
            }
        }
        else{
            n--;
            while(n--){
                ans += 'd';
            }
            ans += 'c';
        }
        return ans;
    }
};