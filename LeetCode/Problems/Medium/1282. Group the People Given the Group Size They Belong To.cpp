https://leetcode.com/problems/group-the-people-given-the-group-size-they-belong-to/description/?envType=daily-question&envId=2023-09-11




class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        map<int,vector<int>> m;
        for(int i = 0; i < groupSizes.size() ;++i)
            m[groupSizes[i]].push_back(i);
        vector<vector<int>> ans;
        for(auto it : m){
            int k = 0;
            int p = it.second.size();
            while(p>=it.first){
                vector<int> temp;
                for(int i=0;i<it.first;i++){
                    temp.push_back(it.second[k++]);
                }
                p -= it.first;
                ans.push_back(temp);
            }
        }
        return ans;
    }
};