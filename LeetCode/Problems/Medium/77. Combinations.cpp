https://leetcode.com/problems/combinations/description/




class Solution {
private:
    void helper(int start, int n, int k, vector<int> &combination, vector<vector<int>> &result) {
        if (k == 0) {
            result.push_back(combination);
            return;
        }
        for (int i = start; i <= n; ++i) {
            combination[combination.size() - k] = i;
            helper(i + 1, n, k - 1, combination, result);
        }
    }
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result;
        vector<int> combination(k);
        helper(1, n, k, combination, result);
        return result;
    }

};