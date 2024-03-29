https://www.geeksforgeeks.org/problems/buy-maximum-stocks-if-i-stocks-can-be-bought-on-i-th-day/1




class Solution {
public:
     int buyMaximumProducts(int n, int k, int price[]){
        //Write your code here
        vector<pair<int,int>> arr;
        for(int i=0;i<n;i++) {
            arr.push_back({price[i],i+1});
        }
        sort(arr.begin(),arr.end());
        int ans=0;
        for(auto it:arr) {
            int total=it.first*it.second;
            if(k>=total) {
                ans+=it.second;
                k-=total;
            } else {
                ans+=(k/it.first);
                break;
            }
        }
        return ans;
    }
};