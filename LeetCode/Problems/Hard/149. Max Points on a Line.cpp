https://leetcode.com/problems/max-points-on-a-line/description/




class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int maxi = 1;
        for(int i=0;i<points.size()-1;i++){
            map<double,int> m;
            for(int j=i+1;j<points.size();j++){
                double value = (double)( points[j][1] - points[i][1] ) / (double)( points[j][0] - points[i][0]);
                if((points[j][1] - points[i][1] < 0) && (points[j][0] - points[i][0] == 0))
                    m[abs(value)]++;
                else
                    m[value]++;
            }
            int temp = 0;
            for(auto it : m)
                temp = max(temp,it.second + 1);
            maxi = max(maxi,temp);
        }
        return maxi;
    }
};