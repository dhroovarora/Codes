https://www.codechef.com/problems/FEVER




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x;
	    cin >> x;
	    string ans = (x > 98) ? "YES" : "NO" ;
	    cout << ans << endl;
	}
	return 0;
}
