https://leetcode.com/problems/best-team-with-no-conflicts/description/




class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        int n = scores.size();
        int dp[n], ans = 0;
        vector<pair<int, int>> basket;
        for(int i = 0; i < n; i++) 
            basket.push_back({ages[i], scores[i]});
        sort(basket.begin(),basket.end());
        for(int i=0;i<n;i++){
            dp[i] = basket[i].second;
            for(int j=0;j<i;j++){
                if(basket[j].second <= basket[i].second)
                    dp[i] = max(dp[i],dp[j] + basket[i].second);
            }
            ans = max(ans,dp[i]);
        }
        return ans;
    }
};