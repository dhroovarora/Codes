https://leetcode.com/problems/largest-odd-number-in-string/description/?envType=daily-question&envId=2023-12-07




class Solution {
public:
    string largestOddNumber(string num) {
        int j = num.size() - 1;
        while(j>=0){
            if((num[j]-'0')%2)
                break;
            --j;
        }
        if(j == -1)
            return "";
        return num.substr(0,j+1);
    }
};