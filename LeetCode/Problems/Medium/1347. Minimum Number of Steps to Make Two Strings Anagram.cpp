https://leetcode.com/problems/minimum-number-of-steps-to-make-two-strings-anagram/description/?envType=daily-question&envId=2024-01-13




class Solution {
public:
    int minSteps(std::string s, std::string t) {
        std::vector<int> count_s(26, 0);
        std::vector<int> count_t(26, 0);

        for (char ch : s) {
            count_s[ch - 'a']++;
        }

        for (char ch : t) {
            count_t[ch - 'a']++;
        }

        int steps = 0;
        for (int i = 0; i < 26; i++) {
            steps += std::abs(count_s[i] - count_t[i]);
        }

        return steps / 2;  
    }
};