https://leetcode.com/problems/move-zeroes/




class Solution {
public:
    void moveZeroes(vector<int>& nums) {
//         int l=0,r =nums.size() -1;
        
//         while(l<=r){
//             if(nums[l] != 0){
//                 l++;
//             }
//             else{
//                 nums.erase(nums.begin() + l);
//                 nums.push_back(0);
//                 r--;
//             }
//         }
        
        
        
        int i = 0;
        for(int j=0;j<nums.size();j++){
            if(nums[j] != 0){
                swap(nums[i] , nums[j]);
                i++;
            }
        }
    }
};