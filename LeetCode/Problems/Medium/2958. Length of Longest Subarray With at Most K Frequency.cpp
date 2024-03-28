https://leetcode.com/problems/length-of-longest-subarray-with-at-most-k-frequency/description/?envType=daily-question&envId=2024-03-28




class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int ans=0;
        unordered_map<int,int>mp;
        int n=size(nums);

        for(int l=0,r=0;r<n;r++){
            ++mp[nums[r]];
            if(mp[nums[r]]>k){
                while(nums[l]!=nums[r]){
                    --mp[nums[l]];
                    ++l;
                }
                --mp[nums[l]];
                ++l;
            }
            ans=max(ans,r-l+1);
        }
        return ans;
    }
};