https://leetcode.com/problems/find-the-original-array-of-prefix-xor/?envType=daily-question&envId=2023-10-31




class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> result(pref.size());
        result[0] = pref[0];
        for(int i = 1; i < pref.size(); i++)
            result[i] = pref[i] ^ pref[i-1];
        return result;
    }
};