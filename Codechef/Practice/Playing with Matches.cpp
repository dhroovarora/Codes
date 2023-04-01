https://www.codechef.com/problems/MATCHES




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b;
	    cin >> a >> b;
	    a += b;
	    int ans = 0;
	    while(a){
	        int q = a%10;
	        if(q == 0)
	            ans += 6;
	        else if(q == 1)
	            ans += 2;
	        else if(q == 2)
	            ans += 5;
	        else if(q == 3)
	            ans += 5;
	        else if(q == 4)
	            ans += 4;
	        else if(q == 5)
	            ans += 5;
	        else if(q == 6)
	            ans += 6;
	        else if(q == 7)
	            ans += 3;
	        else if(q == 8)
	            ans += 7;
	        else
	            ans += 6;
	       a /= 10;
	    }
	    cout << ans << endl;
	}
	return 0;
}