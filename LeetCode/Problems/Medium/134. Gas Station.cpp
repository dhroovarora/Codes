https://leetcode.com/problems/gas-station/description/




class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int ans = 0;
        int n = gas.size();
        int total = 0;
        int p = 0;
        for(int i=0;i<n;i++){
            ans += gas[i] - cost[i];
            total += gas[i] - cost[i];
            if(ans < 0){
                p = i + 1;
                ans = 0;
            }
        }
        if(p == n ||  total < 0){
            return -1;
        }
        return p;
    }
};