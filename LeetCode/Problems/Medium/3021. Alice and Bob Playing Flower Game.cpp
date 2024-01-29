https://leetcode.com/problems/alice-and-bob-playing-flower-game/description/




class Solution {
public:
    long long flowerGame(int n, int m) {
        long long a = n/2 , b = m/2;
        long long ans = 0;
        if(n%2)
            ans = (ans + ((a*b + b)));
        else
            ans += (a*b);
        if(m%2)
            ans += ((a*b + a));
        else
            ans += (a*b);
        return ans;
    }
};