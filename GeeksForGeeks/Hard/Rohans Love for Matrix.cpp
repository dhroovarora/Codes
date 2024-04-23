https://www.geeksforgeeks.org/problems/rohans-love-for-matrix4723/1




class Solution {
  public:
    int firstElement(int n) {
        // code here
        if(n==1)
            return 1;
        int a = 1;
        int b = 2;
        --n;
        while(--n){
            int c = (a+b)%1000000007;
            a = b;
            b = c;
        }
        return a;
    }
};