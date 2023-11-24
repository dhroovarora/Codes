https://leetcode.com/problems/maximum-number-of-coins-you-can-get/description/?envType=daily-question&envId=2023-11-24




class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int i = 0,j=piles.size() - 2;
        int ans = 0;
        while(i<j){
            ans += piles[j];
            --j;
            --j;
            ++i;
        }
        return ans;
    }
};