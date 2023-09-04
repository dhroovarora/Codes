https://practice.geeksforgeeks.org/problems/stock-buy-and-sell-1587115621/1




//User function template for C++

class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
    vector<vector<int> > stockBuySell(vector<int> A, int n){
        // code here
        vector<vector<int>>v;
        for(int i=0;i<n-1;++i)
            if(A[i] < A[i+1])
                v.push_back({i,i+1});
        return v;
    }
};