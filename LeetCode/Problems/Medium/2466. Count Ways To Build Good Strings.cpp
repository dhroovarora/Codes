https://leetcode.com/problems/count-ways-to-build-good-strings/description/




class Solution {
#define ll long long
public:
    ll mod = 1e9 + 7;
    ll helper(ll len,ll low,ll high,vector<ll> &dp,int zero,int one){
        if(len > high)
            return 0;
        ll ans = 0;
        if(dp[len] != -1)
            return dp[len];
        if(len >= low)
            ans = 1;
        ans += helper(len + zero,low,high,dp,zero,one);
        ans = (ans%mod + helper(len+one,low,high,dp,zero,one)%mod)%mod;
        return dp[len] = ans;
    }
    int countGoodStrings(int low, int high, int zero, int one) {
        vector<ll> dp(high + 1 , -1);
        return helper(0,low,high,dp,zero,one);
    }
};