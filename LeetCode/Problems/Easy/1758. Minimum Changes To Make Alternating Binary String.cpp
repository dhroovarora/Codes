https://leetcode.com/problems/minimum-changes-to-make-alternating-binary-string/?envType=daily-question&envId=2023-12-24




class Solution {
public:
    int minOperations(string s) {
        int n = s.size(), count = 0;
        if(n == 1)
            return 0;
        for(int i = 0; i < n; i++) {
            if((i%2 == 0 && s[i] == '1') || (i%2 && s[i] == '0'))
                ++count;
        }
        return min(count, n-count);
    }
};