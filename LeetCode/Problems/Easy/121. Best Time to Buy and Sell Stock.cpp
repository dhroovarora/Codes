https://leetcode.com/problems/best-time-to-buy-and-sell-stock/



class Solution {
public:
    // int maxProfit(vector<int>& prices) {
    //     int c = prices[0];
    //     int diff = 0;
    //     for(int i=1;i<prices.size();i++){
    //         if(prices[i] <c){
    //             c = prices[i];
    //         }
    //         if(prices[i] -c > diff){
    //             diff = prices[i] - c;
    //         }
    //     }
    //     return diff;
    // }
    int maxProfit(vector<int>& arr) {

        int maxPro=0,mn=INT_MAX;
        
        for(int i=0;i<arr.size();i++)
        { 
            mn=min(mn,arr[i]);
            maxPro=max(maxPro,arr[i]-mn);
         
        }
        return maxPro;
    }
};