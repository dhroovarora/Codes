https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/description/




class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        map<int,int> m;
        int s = 0;
        for(int i=0;i<nums.size();i++)
            m[nums[i]]++;
        for(auto i:m){
            m[i.first] = s;
            s += i.second;
        }
        for(int i=0;i<nums.size();i++){
            nums[i] = m[nums[i]];
        }
        return nums;
    }
};