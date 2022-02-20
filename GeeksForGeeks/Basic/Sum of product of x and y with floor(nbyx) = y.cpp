
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
	public:
	long long int sumofproduct(int n)
	{
	    // Code here
	    int y ;
	    long int a=0;
	    for(int x = 1; x<=n;x++)
	    {
	        y = floor(n/x);
	        a = a + long(y)*long(x);
	        }
	        return a;
	}  
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		long long int ans = ob.sumofproduct(n);
		cout << ans <<"\n";
	}  
	return 0;
}  // } Driver Code Ends