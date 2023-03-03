https://www.codechef.com/problems/FCTRL




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int ans = 0;
	    while(n>=5){
	        ans += n/5;
	        n /= 5;
	    }
	    cout << ans << endl;
	}
	return 0;
}