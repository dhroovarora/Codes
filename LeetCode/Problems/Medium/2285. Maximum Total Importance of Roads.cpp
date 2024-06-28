https://leetcode.com/problems/maximum-total-importance-of-roads/description/?envType=daily-question&envId=2024-06-28




class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<int> dhr(n,0);
        for(auto it : roads){
            ++dhr[it[0]];
            ++dhr[it[1]];
        }
        sort(dhr.begin(),dhr.end());
        long long ans = 0;
        for(int i=0;i<n;++i){
            ans += ((i+1LL)*(dhr[i]));
        }
        return ans;
    }
};