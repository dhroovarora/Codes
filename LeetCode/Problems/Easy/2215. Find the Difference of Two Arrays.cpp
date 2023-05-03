https://leetcode.com/problems/find-the-difference-of-two-arrays/description/




class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1;
        set<int> s2;
        for(auto i : nums1)
            s1.insert(i);
        for(auto i : nums2)
            s2.insert(i);
        vector<vector<int>> ans;
        vector<int> ans1;
        vector<int> ans2;
        for(auto i : nums1){
            if(s2.find(i) == s2.end()){
                ans1.push_back(i);
                s2.insert(i);
            }
        }
        for(auto i : nums2){
            if(s1.find(i) == s1.end()){
                ans2.push_back(i);
                s1.insert(i);
            }
        }
        ans.push_back(ans1);
        ans.push_back(ans2);
        return ans;
    }
};