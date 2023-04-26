https://www.codechef.com/problems/FODCHAIN




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int e,k;
	    cin >> e >> k;
	    int ans = 1;
	    while(e >= k){
	        ans++;
	        e /= k;
	    }
	    cout << ans << endl;
	}
	return 0;
}