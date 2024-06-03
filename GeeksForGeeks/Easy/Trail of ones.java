https://www.geeksforgeeks.org/problems/trail-of-ones3242/1




class Solution {
    static int numberOfConsecutiveOnes(int n) {
        // code here
        int m = 1000000007;
        long ans = 1;
        int a=0,b=1;
        
        for(int i=3;i<=n;++i){
            ans = (ans*2+a+b)%m;
            a%=m;
            b%=m;
            int t = a;
            a = b;
            b = b + t;
        }
        return (int)ans;
    }
}