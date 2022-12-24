https://leetcode.com/problems/find-the-pivot-integer/description/




class Solution {
public:
    int pivotInteger(int n) {
        int sum = 0;
        for(int i=0;i<n;i++){
            sum += (i+1);
        }
        int temp = 0;
        for(int i=1;i<=n;i++){
            temp += i;
            if(sum == temp)
                return i;
            sum -= i;
        }
        return -1;
    }
};