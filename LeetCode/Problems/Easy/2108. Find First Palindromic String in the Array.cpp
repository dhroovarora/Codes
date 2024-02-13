https://leetcode.com/problems/find-first-palindromic-string-in-the-array/description/?envType=daily-question&envId=2024-02-13




class Solution {
public:
    bool isPalindrome(string s){
        int i=0,j=s.size()-1;
        while(i<j){
            if(s[i] != s[j])
                return 0;
            ++i;
            --j;
        }
        return 1;
    }
    string firstPalindrome(vector<string>& words) {
        for(auto it : words){
            if(isPalindrome(it))
                return it;
        }
        return "";
    }
};