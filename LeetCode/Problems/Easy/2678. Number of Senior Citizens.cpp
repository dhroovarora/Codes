https://leetcode.com/problems/number-of-senior-citizens/submissions/1340832827/?envType=daily-question&envId=2024-08-01




class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans = 0;
        for(string s : details){
            int age = (s[11] - '0');
            int a = (s[12] - '0');
            age *= 10;
            age += a;
            if(age > 60)
                ++ans;
        }
        return ans;
    }
};