https://www.codechef.com/problems/BIN_BAT




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,a,b;
	    cin >> n >> a >> b;
	    int ans = 0;
	    n /= 2;
	    n /= 2;
	    while(n){
	        n /= 2;
	        ans += a;
	        ans += b;
	    }
	    ans += a;
	    cout << ans << endl;
	}
	return 0;
}