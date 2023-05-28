https://leetcode.com/problems/maximum-strength-of-a-group/description/




class Solution {
public:
    long long maxStrength(vector<int>& nums) {
        if(nums.size() == 1)
            return nums[0];
        sort(nums.begin(),nums.end());
        int i=0;
        int n = nums.size();
        long long ans = 1;
        bool flag = 0;
        while(i<n){
            if(nums[i] > 0)
                break;
            else if(nums[i] == 0)
                i++;
            else if(i==n-1)
                return ans;
            else if(nums[i+1] < 0){
                flag = 1;
                ans *= (nums[i]*nums[i+1]);
                i += 2;
            }
            else
                i++;
        }
        while(i<n){
            flag = 1;
            ans *= nums[i];
            i++;
        }
        if(flag)
            return ans;
        return 0;
    }
};