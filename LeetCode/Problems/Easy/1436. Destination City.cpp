https://leetcode.com/problems/destination-city/description/?envType=daily-question&envId=2023-12-15




class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,int> m;
        unordered_set<string> s;
        for(auto it : paths){
            ++m[it[0]];
            ++m[it[1]];
            s.insert(it[1]);
        }
        for(auto it : m){
            if(it.second == 1 && (s.find(it.first) != s.end()))
                return it.first;
        }
        return "0";
    }
};