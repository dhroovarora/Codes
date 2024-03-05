https://leetcode.com/problems/minimum-length-of-string-after-deleting-similar-ends/description/?envType=daily-question&envId=2024-03-05




class Solution {
public:
    int minimumLength(string s) {
        int i=0,j=s.size()-1;
        while(i<j){
            if(s[i] != s[j])
                return (j-i+1);
            char a = s[i];
            while(i<=j && s[i] == a)
                ++i;
            while(j>=i && s[j] == a)
                --j;
        }
        return j - i + 1;
    }
};