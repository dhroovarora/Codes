https://leetcode.com/problems/nim-game/description/




class Solution {
public:
    bool canWinNim(int n) {
        if(n%4)
            return 1;
        else
            return 0;
    }
};