https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/description/




class Solution {
public:
    int numberOfSteps(int num) {
        if(num == 0)
            return 0;
        if(num == 1)
            return 1;
        if(num%2)
            return numberOfSteps(--num) + 1;
        return numberOfSteps(num/2) + 1;
    }
};