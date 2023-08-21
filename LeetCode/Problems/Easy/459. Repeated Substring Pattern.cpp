https://leetcode.com/problems/repeated-substring-pattern/description/




class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        int i = 2;
        while(i<=n){
            bool flag = 1;
            if(n%i){
                ++i;
                continue;
            }
            int p = n/i;
            string t = s.substr(0,p);
            for(int k = p; k < n - p + 1 ; k += p){
                string q = s.substr(k,n/i);
                if(q != t){
                    flag = 0;
                    continue;
                }
            }
            if(flag)
                return 1;
            ++i;
        }
        return 0;
    }
};