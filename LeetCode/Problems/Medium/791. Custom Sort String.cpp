https://leetcode.com/problems/custom-sort-string/description/?envType=daily-question&envId=2024-03-11




class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char, int> charCount;
        for (char c : order) {
            charCount[c] = 0;
        }
        for (char c : s) {
            if (charCount.find(c) != charCount.end()) {
                ++charCount[c];
            }
        }
        string sortedS;
        for (char c : order) {
            sortedS.append(charCount[c], c);
        }
        for (char c : s) {
            if (charCount.find(c) == charCount.end()) {
                sortedS.push_back(c);
            }
        }      
        return sortedS;
    }
};