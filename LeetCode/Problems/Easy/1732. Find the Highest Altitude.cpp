https://leetcode.com/problems/find-the-highest-altitude/description/




class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxi = 0;
        int t = 0;
        for(int i=0;i<gain.size();i++){
            t += gain[i];
            maxi = max(maxi,t);
        }
        return maxi;
    }
};