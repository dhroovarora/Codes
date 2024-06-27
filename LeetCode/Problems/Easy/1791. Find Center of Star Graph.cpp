https://leetcode.com/problems/find-center-of-star-graph/description/?envType=daily-question&envId=2024-06-27




class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int,int> m;
        for(auto i : edges){
            ++m[i[0]];
            ++m[i[1]];
        }
        int ans = 0,t = 1;
        for(auto i :m){
            if(ans < i.second){
                t = i.first;
                ans = i.second;
            }
        }
        return t;
    }
};