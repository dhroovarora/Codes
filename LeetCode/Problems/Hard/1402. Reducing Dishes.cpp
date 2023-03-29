https://leetcode.com/problems/reducing-dishes/description/




class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        int ans = 0;
        int temp = 0;
        sort(satisfaction.begin(),satisfaction.end());
        reverse(satisfaction.begin(),satisfaction.end());
        for(int i=0;i<satisfaction.size();i++){
            temp += satisfaction[i];
            if(temp < 0)
                break;
            ans += temp;
        }
        return ans;
    }
};