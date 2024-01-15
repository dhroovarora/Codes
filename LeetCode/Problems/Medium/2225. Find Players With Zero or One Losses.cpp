https://leetcode.com/problems/find-players-with-zero-or-one-losses/description/?envType=daily-question&envId=2024-01-15




class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,bool> m;
        map<int,int> s;
        for(auto it : matches){
            if(m.find(it[0]) == m.end())
                m[it[0]] = 1;
            m[it[1]] = 0;
            ++s[it[1]];
        }
        vector<int> temp,temp2;
        for(auto it : m){
            if(it.second)
                temp.push_back(it.first);
        }
        for(auto it : s){
            if(it.second == 1)
                temp2.push_back(it.first);
        }
        return {temp,temp2};
    }
};