https://leetcode.com/problems/find-the-divisibility-array-of-a-string/




class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        long long k = 0;
        vector<int> a;
        for(auto i : word){
            k = k*10 + (i-'0');
            if(k%m == 0){
                a.push_back(1);
                k = 0;
            }
            else
                a.push_back(0);
            if(k > m){
                k = k%m;
            }
        }
        return a;
    }
};