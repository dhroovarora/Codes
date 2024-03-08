https://leetcode.com/problems/count-elements-with-maximum-frequency/description/?envType=daily-question&envId=2024-03-08




class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto i : nums){
            ++m[i];
        }
        int maxi = 0,ans=0;
        for(auto i : m)
            maxi = max(maxi,i.second);
        for(auto i : m){
            if(i.second == maxi)
                ans += maxi;
        }
        return ans;
    }
};