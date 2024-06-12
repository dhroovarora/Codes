https://www.geeksforgeeks.org/problems/padovan-sequence2855/1




class Solution
{
  public int padovanSequence(int n)
    {
        //code here.
        if(n<=2) return 1;
        int a,b,c,mod = (int)1e9+7;
        a = b = c = 1;
        for(int i=3;i<=n;i++){
            int t = (a+b)%mod;
            a = b;
            b = c;
            c = t;
        }
        return c;
    }
    
}