https://leetcode.com/problems/reduction-operations-to-make-the-array-elements-equal/description/?envType=daily-question&envId=2023-11-19




class Solution {
public:
    int reductionOperations(vector<int>& nums) { 
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int prev = nums[n-1];
        int temp = 1;
        int ans = 0;
        for(int i=n-2;i>=0;--i){
            if(nums[i] == prev){
                ++temp;
            }
            else{
                prev = nums[i];
                ans += temp;
                ++temp;
            }
        }
        return ans;
    }
};