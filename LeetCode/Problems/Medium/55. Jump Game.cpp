https://leetcode.com/problems/jump-game/description/




class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size() == 1)
            return 1;
        int a = nums[0];
        for(int i=1;i<nums.size();i++){
            if(i == nums.size() - 1){
                if(a){
                    // cout << a << endl;
                    return 1;
                }
            }
            else{
                if(a == 0)
                    return 0;
            }
            a = max(a-1,nums[i]);
        }
        return 0;
    }
};