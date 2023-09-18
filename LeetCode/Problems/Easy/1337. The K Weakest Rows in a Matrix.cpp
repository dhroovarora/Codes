https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/description/?envType=daily-question&envId=2023-09-18




bool comp(const pair<int,int> &a,const pair<int,int> &b){
    if(a.first == b.first)
        return a.second < b.second;
    return a.first < b.first;
}
class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>> p;
        for(int i=0;i<mat.size();i++){
            int t = 0;
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j] == 1)
                    ++t;
            }
            p.push_back({t,i});
        }
        sort(p.begin(),p.end(),comp);
        vector<int> ans;
        int i=0;
        while(k--){
            ans.push_back(p[i++].second);
        }
        return ans;
    }
};