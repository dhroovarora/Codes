https://leetcode.com/problems/unique-number-of-occurrences/description/?envType=daily-question&envId=2024-01-17




class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> m;
        for(auto it : arr)
            ++m[it];
        unordered_set<int> s;
        for(auto it : m){
            if(s.find(it.second) != s.end())
                return 0;
            s.insert(it.second);
        }
        return 1;
    }
};