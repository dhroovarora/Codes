https://www.codechef.com/START73C/problems/SUMDIV2/




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    long long x,y;
	    cin >> x >> y;
	    long long ans = x*y - x - y;
	    if(ans == -1)
	        ans = max(x,y) - 1;
	    if(ans == 0)
	        ans = 2;
	    cout << ans << endl;
	}
	return 0;
}