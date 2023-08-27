https://leetcode.com/problems/frog-jump/description/




class Solution {
public:
    unordered_map<int,int> m;
    int dp[2000][2000];
    int helper(int i,int k,vector<int>& stones){
        if(i == stones.size() - 1)
            return 1;
        if(dp[i][k] != -1)
            return dp[i][k];
        bool a = 0,b = 0,c = 0;
        if(m.find(stones[i] + k) != m.end())
            a = helper(m[stones[i] + k],k,stones);
        if(k > 1 && m.find(stones[i] + k - 1) != m.end())
            b = helper(m[stones[i] + k - 1],k-1,stones);
        if(m.find(stones[i] + k + 1) != m.end())
            c = helper(m[stones[i] + k + 1],k+1,stones);
        dp[i][k] = a || b || c;
        return dp[i][k];
    }
    bool canCross(vector<int>& stones) {
        if(stones[1] - stones[0] != 1)
            return 0;
        for(int i=0;i<stones.size();i++)
            m[stones[i]] = i;
        memset(dp,-1,sizeof(dp));
        return helper(1,1,stones);
    }
};