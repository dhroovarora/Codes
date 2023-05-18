https://leetcode.com/problems/minimum-number-of-vertices-to-reach-all-nodes/description/




class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<bool>arr1(n,0);
        vector<bool>arr2(n,0);
        for(auto it: edges){
            arr1[it[0]] = 1;
            arr2[it[1]] = 1;
        }
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(arr1[i] && !arr2[i])
                ans.push_back(i);
        }
        return ans;
    }
};