https://leetcode.com/problems/maximum-bags-with-full-capacity-of-rocks/description/




class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks){
        int n = rocks.size();
        for(int i=0;i<n;i++){
            capacity[i] -= rocks[i];
        }
        int ans = 0;
        sort(capacity.begin(),capacity.end());
        for(int i=0;i<n;i++){
            while(capacity[i] == 0){
                ans++;
                i++;
            }
            if(additionalRocks - capacity[i] >=0){
                additionalRocks -= capacity[i];
                ans++;
            }  
        }
        return ans;
    }
};