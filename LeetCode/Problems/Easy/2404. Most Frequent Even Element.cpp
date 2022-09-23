https://leetcode.com/problems/most-frequent-even-element/




class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                m[nums[i]]++;
            }
        }
        int ans = -1;
        int lol = 0;
        for(auto i:m){
            if(i.second > lol){
                ans = i.first;
                lol = i.second;
            }
        }
        return ans;
    }
};