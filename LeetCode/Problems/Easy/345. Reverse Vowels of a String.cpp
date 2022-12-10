https://leetcode.com/problems/reverse-vowels-of-a-string/description/




class Solution {
public:
    string reverseVowels(string s) {
        int i=0,j=s.size()-1;
        bool flag = 0 , flag2 = 0;
        while(i<j){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                if(flag2){
                    swap(s[i],s[j]);
                    flag = 0;
                    flag2 = 0;
                    i++;
                    j--;
                }
                else{
                    if(!flag){
                        flag = 1;
                    }
                }
            }
            else{
                if(!flag){
                    i++;
                }
            }
            if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u' || s[j]=='A' || s[j]=='E' || s[j]=='I' || s[j]=='O' || s[j]=='U'){
                if(flag){
                    swap(s[i],s[j]);
                    flag = 0;
                    flag2 = 0;
                    i++;
                    j--;
                }
                else{
                    if(!flag2){
                        flag2 = 1;
                    }
                }
            }
            else{
                if(!flag2){
                    j--;
                }
            }
        }
        return s;
    }
};