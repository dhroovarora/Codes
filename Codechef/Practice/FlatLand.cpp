https://www.codechef.com/problems/ICL1902




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int ans = 0;
	    while(n){
	        int r = sqrt(n);
	        n -= (r*r);
	        ++ans;
	    }
	    cout << ans << endl;
	}
	return 0;
}