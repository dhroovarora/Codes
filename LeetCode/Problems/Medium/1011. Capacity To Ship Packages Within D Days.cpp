https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/description/




class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int l = *max_element(weights.begin(),weights.end());
        int r = accumulate(weights.begin(), weights.end(), 0);

        while(l<r){
            int mid = l +  ( r - l)/2;
            int d = 1,c = 0;
            for(int i : weights){
                if(c + i > mid){
                    d++;
                    c = 0;
                }
                c += i;
            }
            if(d <= days)
                r = mid;
            else
                l = mid + 1;
        }
        return l;
    }
};