https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/description/




class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int num1 = 0;
        int num2 = 0;
        for(int i=0;i<nums.size();i++){
            if(num1 < nums[i]){
                if(num2 < nums[i]){
                    num1 = num2;
                    num2 = nums[i];
                }
                else
                    num1 = nums[i];
            }
        }
        return (num1 -1)*(num2 - 1);
    }
};