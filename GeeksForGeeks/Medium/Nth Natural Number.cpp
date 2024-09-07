https://www.geeksforgeeks.org/problems/nth-natural-number/1




class Solution{
	public:
    	long long findNth(long long N)
    {
        // code here
        // ek approach bnai pr dhang se ni bani.
        // long long d = N/1000;
        // d = d*100;
        // long long h  = d/100;
        // long long f = d + h*21;
        
        long long ans=0,x=1;
        while(N){
           ans+=(N%9)*x;
           N/=9;
           x*=10;
        }
        return ans ;
        
    }
};