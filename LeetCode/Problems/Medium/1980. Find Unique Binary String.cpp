https://leetcode.com/problems/find-unique-binary-string/?envType=daily-question&envId=2023-11-16




class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string ans = "";
        for(int i=0;i<nums.size();++i)
            ans += (nums[i][i] == '0' ? '1' : '0');
        return ans;
    }
};