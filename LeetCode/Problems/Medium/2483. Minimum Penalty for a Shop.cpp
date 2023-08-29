https://leetcode.com/problems/minimum-penalty-for-a-shop/description/




class Solution {
public:
    int bestClosingTime(string customers) {
        int maxi = 0 , penality = 0 , ans = -1;
        for(int i=0;i<customers.size();i++){
            penality += (customers[i] == 'Y') ? 1 : -1;
            if(penality > maxi){
                maxi = penality;
                ans = i;
            }
        }
        return ans+1;
    }
};