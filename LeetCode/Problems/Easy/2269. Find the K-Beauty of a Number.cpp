https://leetcode.com/problems/find-the-k-beauty-of-a-number/description/




class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s = to_string(num);
        int ans = 0;
        for(int i=0;i<=s.size()-k;i++){
            // string a = s.substr(i,k);
            int b = stoi(s.substr(i,k));
            if(b==0)
                continue;
            if(num % b == 0)
                ans++;
        }
        return ans;
    }
};