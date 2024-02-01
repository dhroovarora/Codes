https://leetcode.com/problems/divide-array-into-arrays-with-max-difference/description/?envType=daily-question&envId=2024-02-01




class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i=0;
        vector<vector<int>> ans;
        while(i<nums.size()){
            if(nums[i+2] - nums[i] > k)
                return {};
            ans.push_back({nums[i],nums[i+1],nums[i+2]});
            i += 3;
        }
        return ans;
    }
};