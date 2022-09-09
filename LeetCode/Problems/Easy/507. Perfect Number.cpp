https://leetcode.com/problems/perfect-number/



class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num==1)
            return 0;
        int k=1;
        for(int i=2;i<sqrt(num);i++){
            if(num%i==0){
                k += i + num/i;
            }
        }
        if(k==num)
            return 1;
        return 0;
    }
};