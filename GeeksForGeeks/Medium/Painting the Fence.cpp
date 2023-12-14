https://www.geeksforgeeks.org/problems/painting-the-fence3727/1




class Solution
{
    public:
    long long countWays(int n,int k)
    {
        if(n == 1)
            return k;
            
        long mod = (long) 1e9 + 7, same = 0, diff = k,total=same+diff;
        
        for(int i = 2; i <= n; i++) 
        {
            long temp = diff;
            diff=(total*(k-1))%mod;
            same = temp;
            total = (same +diff)%mod;
        }
        
        return (total) % mod;
    }
};