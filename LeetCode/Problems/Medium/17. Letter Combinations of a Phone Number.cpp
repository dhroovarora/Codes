https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/




class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty())
            return {};

        string phone_map[] = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string> combinations = {""};

        for (char digit : digits) {
            vector<string> new_combinations;
            for (string combination : combinations) {
                for (char letter : phone_map[digit - '2']) {
                    new_combinations.push_back(combination + letter);
                }
            }
            combinations = new_combinations;
        }
        return combinations;
    }
};