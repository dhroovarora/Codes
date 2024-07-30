https://leetcode.com/problems/minimum-deletions-to-make-string-balanced/description/?envType=daily-question&envId=2024-07-30




class Solution {
public:
    static int minimumDeletions(string& s) {
        int cnt=0, ans=0;
        for(char c: s)
            ans=min(ans+=(c=='a'), cnt+=(c=='b'));
        return ans;
    }
};