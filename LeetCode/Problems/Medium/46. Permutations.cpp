https://leetcode.com/problems/permutations/description/




class Solution {
public:
    void solve(vector<int>& nums,vector<int>&per,int c,vector<vector<int>>& ans){
        if(c==nums.size()){
            ans.push_back(per);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(per[i]==11){
                per[i]=nums[c];
                solve(nums,per,c+1,ans);
                per[i]=11;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        int n=nums.size();
        vector<int>per(n,11);
        solve(nums,per,0,ans);
        return ans;
    }
};