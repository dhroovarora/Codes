https://leetcode.com/problems/rearrange-array-to-maximize-prefix-score/




class Solution {
public:
    int maxScore(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        long long sum = 0;
        int n = nums.size();
        int ans = 0;
        for(int i=0;i<n;i++){
            sum += nums[i];
            if(sum > 0)
                ans++;
            if(sum <= 0)
                break;
        }
        return ans;
    }
};