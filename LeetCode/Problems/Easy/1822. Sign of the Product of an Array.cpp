https://leetcode.com/problems/sign-of-the-product-of-an-array/description/




class Solution {
public:
    int arraySign(vector<int>& nums) {
        int n = 0;
        bool flag = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 0){
                flag = 1;
                break;
            }
            else if(nums[i] < 0)
                n++;
        }
        if(flag)
            return 0;
        if(n%2)
            return -1;
        return 1;
    }
};