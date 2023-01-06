https://leetcode.com/problems/maximum-ice-cream-bars/description/




class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int i = 0;
        while(coins){
            if(coins - costs[i] >= 0)
                coins -= costs[i++];
            else
                break;
            if(i == costs.size())
                break;
        }
        return i;
    }
};