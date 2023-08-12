https://www.codechef.com/problems/INFERNO




#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, x, h;
	cin >> t;
	while (t--) {
	    int mx = 0, tot = 0;
	    cin >> n >> x;
	    for (int i = 0; i < n; ++i) {
	        cin >> h;
	        mx = max(mx, h);
	        tot += (h+x-1)/x;
	    }
	    cout << min(mx, tot) << endl;
	}
	return 0;
}