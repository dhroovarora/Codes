https://leetcode.com/problems/two-sum/





class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> a{0,0};
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    a[0] = i;
                    a[1] = j;
                }
            }
        }
        return a;
    }
};


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            if(mp.find(target-nums[i])!=mp.end()){
                ans.push_back(mp[target-nums[i]]);
                ans.push_back(i);
            }
            mp[nums[i]]=i;
        }
        return ans;
    }
};