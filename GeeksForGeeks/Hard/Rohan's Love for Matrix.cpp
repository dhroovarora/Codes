https://practice.geeksforgeeks.org/problems/rohans-love-for-matrix4723/0




class Solution {
  public:
    int firstElement(int n) 
    {
        // code here
        int fib[2][2] = { {1,1},{1,0} };
        int m[2][2] = { {1,1},{1,0} };
        for(int i=2;i<=n;i++){
            int a = (fib[0][0] * m[0][0] + fib[0][1] * m[1][0])%1000000007;
            int b = (fib[0][0] * m[0][1] + fib[0][1] * m[1][1])%1000000007;
            int c = (fib[1][0] * m[0][0] + fib[1][1] * m[1][0])%1000000007;
            int d = (fib[1][0] * m[0][1] + fib[1][1] * m[1][1])%1000000007;
            
            fib[0][0] = a;
            fib[0][1] = b;
            fib[1][0] = c;
            fib[1][1] = d;
            
        }
        return fib[1][0];
    }
};