https://www.codechef.com/problems/CHEFRACES




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y,a,b;
	    cin >> x >> y >> a >> b;
	    int ans = 2;
	    if(x == a || x == b)
	        ans--;
	    if(y == a || y == b)
	        ans--;
	    cout << ans << endl;
	}
	return 0;
}