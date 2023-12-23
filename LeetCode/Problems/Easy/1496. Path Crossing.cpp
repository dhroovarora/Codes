https://leetcode.com/problems/path-crossing/description/?envType=daily-question&envId=2023-12-23




class Solution {
public:
    bool isPathCrossing(string path) {
        int x = 0,y=0;
        set<pair<int,int>> s;
        s.insert({x,y});
        for(auto it : path){
            if(it == 'N')
                ++y;
            else if(it == 'W')
                ++x;
            else if(it == 'S')
                --y;
            else
                --x;
            if(s.find({x,y}) != s.end())
                return 1;
            s.insert({x,y});
        }
        return 0;
    }
};