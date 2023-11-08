https://leetcode.com/problems/determine-if-a-cell-is-reachable-at-a-given-time/description/?envType=daily-question&envId=2023-11-08




class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        if(sx == fx && sy == fy && t==1)
            return 0;
        if(sx > fx)
            swap(sx,fx);
        if(sy > fy)
            swap(sy,fy);
        t -= max(fx-sx,fy-sy);
        if(t >= 0)
            return 1;
        return 0;
    }
};