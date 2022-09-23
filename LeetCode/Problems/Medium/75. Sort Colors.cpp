https://leetcode.com/problems/sort-colors/




class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int z = 0;
        for(int i=0;i<n-z;i++){
            if(nums[i] == 0 ){
                nums.push_back(0);
                z++;
                nums.erase(nums.begin() + i);
                i--;
            }
        }
        int o = 0;
        for(int i=0;i<n-z-o;i++){
            if(nums[i] == 1 ){
                nums.push_back(1);
                o++;
                nums.erase(nums.begin() + i);
                i--;
            }
        }
        int t = 0;
        for(int i=0;i<n-z-o-t;i++){
            if(nums[i] == 2 ){
                nums.push_back(2);
                t++;
                nums.erase(nums.begin() + i);
                i--;
            }
        }
    }
};