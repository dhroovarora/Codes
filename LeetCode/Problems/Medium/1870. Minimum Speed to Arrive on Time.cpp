https://leetcode.com/problems/minimum-speed-to-arrive-on-time/description/




class Solution {
public:
    int helper(vector<int>& dist,int speed,double hour){
        double ans = 0;
        for(int i=0;i<dist.size();i++){
            double time = dist[i]*1.0/speed;
            if( i != dist.size() - 1)
                ans += ceil(time);
            else
                ans += time;
            if(ans > hour)
                return 0;
        }
        return 1;
    }
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int i = 1;
        int j = 1e7;
        int ans = -1;
        while(i <= j){
            int mid = i + (j-i)/2;
            if(helper(dist,mid,hour)){
                ans = mid;
                j = mid - 1;
            }
            else
                i = mid + 1;
        }
        return ans;
    }
};