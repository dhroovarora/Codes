https://www.geeksforgeeks.org/problems/consecutive-1s-not-allowed1912/1




class Solution{
public:
	// #define ll long long
	ll countStrings(int n) {
	    // code here
	    ll  int  zeroending=1;
        ll int   oneending=1;
        ll int sum=zeroending+oneending;
      
        if(n==1)
            return sum;
         
        int i=2;
        while(i<=n){
            oneending=zeroending;
            zeroending=sum;
            sum=(oneending+zeroending)%1000000007;
            ++i;
        }
        return sum%1000000007;
	}
};