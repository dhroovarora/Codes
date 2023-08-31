https://leetcode.com/problems/minimum-number-of-taps-to-open-to-water-a-garden/description/




class Solution {
public:
    int minTaps(int n, vector<int>& ranges) {
        vector<int> arr(n+1,0);
        for(int i=0;i<ranges.size();i++){
            if(ranges[i] == 0)
                continue;
            int left = max(0 , i - ranges[i]);
            arr[left] = max(arr[left] , i + ranges[i]);
        }
        int end = 0,far_can_reach = 0,taps_used = 0;
        for(int i=0;i<=n;i++){
            if(i > end){
                if(far_can_reach <= end)
                    return -1;
                end = far_can_reach;
                ++taps_used;
            }
            far_can_reach = max(far_can_reach,arr[i]);
        }
        return taps_used + (end < n);
    }
};