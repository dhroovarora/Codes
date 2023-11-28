https://leetcode.com/problems/number-of-ways-to-divide-a-long-corridor/?envType=daily-question&envId=2023-11-28




class Solution {
public:
    int numberOfWays(string corridor) {
        int seat = 0, res = 1, plant = 0;

        for (char i : corridor) {
            if (i == 'S')
                seat += 1;
            else
                if (seat == 2)
                    plant += 1;

            if (seat == 3) {
                res = (res * (plant + 1)) % (1000000007);
                seat = 1;
                plant = 0;
            }
        }

        if (seat != 2)
            return 0;

        return res;
    }
};