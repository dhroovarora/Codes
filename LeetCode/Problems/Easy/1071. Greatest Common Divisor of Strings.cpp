https://leetcode.com/problems/greatest-common-divisor-of-strings/description/




class Solution {
public:
    string gcdOfStrings(string str1, string str2) {\
        string ans = "";
        if(str1 + str2 != str2 + str1)
            return ans;
        int k = __gcd(str1.size(),str2.size());
        for(int i=0;i<k;i++)
            ans += str1[i];
        return ans;
    }
};