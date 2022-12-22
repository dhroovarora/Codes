https://leetcode.com/problems/average-value-of-even-numbers-that-are-divisible-by-three/description/




class Solution {
public:
    int averageValue(vector<int>& nums) {
        int sum = 0,p=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%6==0){
                sum += nums[i];
                p++;
            }
        }
        if(p==0)
            return 0;
        return (sum/p);
    }
};