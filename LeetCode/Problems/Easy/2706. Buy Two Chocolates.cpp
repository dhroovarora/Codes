https://leetcode.com/problems/buy-two-chocolates/description/




class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int min1 = INT_MAX;
        int min2 = INT_MAX;
        for(int i=0;i<prices.size();i++){
            if(min1 > prices[i]){
                if(min2 > prices[i]){
                    min1 = min2;
                    min2 = prices[i];
                }
                else
                    min1 = prices[i];
            }
        }
        if(min1 + min2 <= money)
            return money - min1 - min2;
        return money;
    }
};