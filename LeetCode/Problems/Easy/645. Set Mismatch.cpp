https://leetcode.com/problems/set-mismatch/




class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int> m;
        vector<int> ans;
        for(int i=1;i<=nums.size();i++)
            m[i]++;
        for(int i=0;i<nums.size();i++)
            m[nums[i]]--;
        for(auto it:m){
            if(it.second == -1){
                ans.push_back(it.first);
            }
        }
        for(auto it:m){
            if(it.second == 1){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};