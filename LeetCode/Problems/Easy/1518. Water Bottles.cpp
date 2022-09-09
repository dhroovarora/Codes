https://leetcode.com/problems/water-bottles/



class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int drink = numBottles;
        int empty = numBottles;
        while(empty>= numExchange){
            int k = empty;
            int h = empty/numExchange;
            drink += h;
            empty = h + empty - h*numExchange;
        }
        return drink;
    }
};