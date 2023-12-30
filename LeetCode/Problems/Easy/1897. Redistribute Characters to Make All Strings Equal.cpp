https://leetcode.com/problems/redistribute-characters-to-make-all-strings-equal/?envType=daily-question&envId=2023-12-30




class Solution {
public:
    bool makeEqual(vector<string>& words) {
        vector<int> counts(26, 0);
        for (string word : words)
            for (char c : word)
                counts[c - 'a']++;
        int n = words.size();
        for (int val : counts)
            if (val % n != 0)
                return 0;
        return 1;
    }
};