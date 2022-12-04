https://leetcode.com/problems/minimum-average-difference/




class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int ans = -1;
        long long temp = INT_MAX;
        long long sum = 0;
        long long start = 0;
        for(int i=0;i<nums.size();i++)
            sum += nums[i];
        for(int i=0;i<nums.size();i++){
            start += nums[i];
            sum -= nums[i];
            long long y = 0;
            if(i != nums.size() -1 )
                y = start/(i+1) - sum/(nums.size()-i-1);
            else
                y = start/(i+1);
            if(y < 0)
                y *= -1;
            if( y < temp){
                temp = y;
                ans = i;
            }
        }
        return ans;
    }
};