https://leetcode.com/problems/length-of-last-word/




class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size() -1;
        while(i>=0){
            if(s[i] != ' '){
                break;            
            }
            i--;
        }
        int k = 0;
        while(i>=0){
            if(s[i] != ' '){
                k++;
                i--;
            }
            else{
                break;
            }
        }
        return k;
    }
};