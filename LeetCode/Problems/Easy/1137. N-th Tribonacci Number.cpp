https://leetcode.com/problems/n-th-tribonacci-number/




class Solution {
public:
    int tribonacci(int n) {
        
        if(n==0)
            return 0;
        else if(n==1)
            return 1;
        else if(n==2)
            return 1;
        int a = 0;
        int b = 1;
        int c = 1;
        int d;
        n--;
        n--;
        while(n>0){
            d = a + b + c;
            a = b;
            b = c;
            c = d;
            n--;
        }
        return d;
    }
};