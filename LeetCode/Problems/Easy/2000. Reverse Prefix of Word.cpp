https://leetcode.com/problems/reverse-prefix-of-word/description/?envType=daily-question&envId=2024-05-01




class Solution {
public:
    string reversePrefix(string word, char ch) {
        int j = word.find(ch);
        if (j != -1) {
            reverse(word.begin(), word.begin() + j + 1);
        }
        return word;
    }
};