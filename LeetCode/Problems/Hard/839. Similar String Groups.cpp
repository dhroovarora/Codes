https://leetcode.com/problems/similar-string-groups/description/




class Solution {
public:
    int numSimilarGroups(vector<string>& strs) {
        int ans = 0;
        vector<bool> visit(strs.size(),0);
        for(int i=0;i<strs.size();i++){
            if(!visit[i]){
                ans++;
                dfs(strs,visit,i);
            }
        }
        return ans;
    }
    void dfs(vector<string>& strs,vector<bool>& visit,int index){
        visit[index] = 1;
        for(int i=0;i<strs.size();i++)
            if(!visit[i] && is_same(strs[index],strs[i]))
                dfs(strs,visit,i);
    }
    bool is_same(string a,string b){
        int diff = 0;
        for(int i=0;i<a.size();i++)
            if(a[i] != b[i])
                diff++;
        if(diff == 0 || diff == 2)
            return 1;
        return 0;
    }
};