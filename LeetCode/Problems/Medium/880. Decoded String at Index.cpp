https://leetcode.com/problems/decoded-string-at-index/description/?envType=daily-question&envId=2023-09-27




class Solution {
public:
    std::string decodeAtIndex(string s, int k) {
        long long length = 0;
        int i = 0;
        
        while (length < k) {
            if (isdigit(s[i])) {
                length *= s[i] - '0';
            } else {
                length++;
            }
            i++;
        }
        
        for (int j = i - 1; j >= 0; j--) {
            if (isdigit(s[j])) {
                length /= s[j] - '0';
                k %= length;
            } else {
                if (k == 0 || k == length) {
                    return std::string(1, s[j]);  // Convert char to std::string
                }
                length--;
            }
        }
        
        return ""; // Default return, should never reach here given problem constraints
    }
};