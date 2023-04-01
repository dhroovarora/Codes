https://leetcode.com/problems/valid-perfect-square/description/




class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 1)
            return 1;
        int i = 0;
        int j = num;
        while(i <= j){
            double mid = i + (j-i)/2;
            if(mid == num/mid)
                return 1;
            else if(mid*mid < num)
                i = mid + 1;
            else
                j = mid - 1;
        }
        return 0;
    }
};