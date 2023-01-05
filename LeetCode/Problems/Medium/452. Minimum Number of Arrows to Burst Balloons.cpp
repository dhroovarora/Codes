https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/description/




class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int ans = 1;
        sort(points.begin(),points.end());
        int last = points[0][1];
        for(auto p : points){
            if(p[0] > last){
                ans++;
                last = p[1];
            }
            last = min(last,p[1]);
        }
        return ans;
    }
};