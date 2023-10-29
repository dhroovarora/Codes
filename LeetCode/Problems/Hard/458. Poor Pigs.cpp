https://leetcode.com/problems/poor-pigs/?envType=daily-question&envId=2023-10-29




class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        return ceil(log2(buckets)/log2(int(minutesToTest/minutesToDie)+1));
    }
};