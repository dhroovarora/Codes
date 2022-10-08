https://leetcode.com/problems/two-out-of-three/




class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        set<int> a;
        set<int> b;
        set<int> c;
        for(int i= 0;i<nums1.size();i++){
            a.insert(nums1[i]);
        }
        for(int i= 0;i<nums2.size();i++){
            b.insert(nums2[i]);
        }
        for(int i= 0;i<nums3.size();i++){
            c.insert(nums3[i]);
        }
        map<int,int> m;
        for(auto it : a){
            m[it]++;
        }
        for(auto it : b){
            m[it]++;
        }
        for(auto it : c){
            m[it]++;
        }
        vector<int> ans;
        for(auto it : m){
            if(it.second > 1){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};