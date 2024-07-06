https://leetcode.com/problems/pass-the-pillow/description/?envType=daily-question&envId=2024-07-06




class Solution {
public:
    int passThePillow(int n, int time) {
        int chunks = time / (n - 1);
        return chunks % 2 == 0 ? (time % (n - 1) + 1) : (n - time % (n - 1));
    }
};