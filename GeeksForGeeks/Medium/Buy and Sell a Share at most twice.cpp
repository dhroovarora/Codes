https://www.geeksforgeeks.org/problems/buy-and-sell-a-share-at-most-twice/1




class Solution
{
    public:
        //User function Template for C++
        
        int maxProfit(vector<int>&price){
            //Write your code here..
            int buy1 = INT_MAX;
            int sell1 = INT_MIN;
            int buy2 = INT_MAX;
            int sell2 = INT_MIN;
            int n = price.size();
            
            for (int i = 0; i < n; i++) {
                buy1 = min(buy1, price[i]);
                sell1 = max(sell1, price[i] - buy1);
                buy2 = min(buy2, price[i] - sell1);
                sell2 = max(sell2, price[i] - buy2);
            }
            
            return sell2;
        }
};