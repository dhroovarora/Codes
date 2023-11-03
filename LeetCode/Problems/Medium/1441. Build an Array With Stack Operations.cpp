https://leetcode.com/problems/build-an-array-with-stack-operations/description/?envType=daily-question&envId=2023-11-03




class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int a = 1;
        for(int i=0;i<target.size();++i){
            ans.push_back("Push");
            while(a != target[i]){
                ans.push_back("Pop");
                ans.push_back("Push");
                ++a;
            }
            ++a;
        }
        return ans;
    }
};