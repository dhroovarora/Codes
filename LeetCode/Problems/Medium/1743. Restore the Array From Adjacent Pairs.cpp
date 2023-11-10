https://leetcode.com/problems/restore-the-array-from-adjacent-pairs/description/?envType=daily-question&envId=2023-11-10




class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& vals) {
        unordered_map<int, std::vector<int>> M;
        
        for (const vector<int>& val : vals) {
            M[val[0]].push_back(val[1]);
            M[val[1]].push_back(val[0]);
        }
        
        vector<int> result;
        int start = -1000000;
        
        for (const auto& entry : M) {
            if (entry.second.size() == 1) {
                start = entry.first;
                break;
            }
        }
        
        int left = -1000000;
        result.push_back(start);
        
        for (int i = 1; i < vals.size() + 1; ++i) {
            const vector<int>& val = M[start];
            int newval = (val[0] == left) ? val[1] : val[0];
            result.push_back(newval);
            left = start;
            start = newval;
        }
        return result;
    }
};