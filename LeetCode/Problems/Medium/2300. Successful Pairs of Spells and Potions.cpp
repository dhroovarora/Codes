https://leetcode.com/problems/successful-pairs-of-spells-and-potions/description/




class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> ans;
        sort(potions.begin(),potions.end());
        for(int i=0;i<spells.size();i++){
            int p = 0;
            int q = potions.size()-1;
            while(p <= q){
                int m = p + (q-p)/2;
                if((long long)potions[m]* (long long)spells[i] < success){
                    p = m + 1;
                }
                else
                    q = m - 1;
            }
            ans.push_back(potions.size() - p);
        }
        return ans;
    }
};