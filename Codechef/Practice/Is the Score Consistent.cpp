https://www.codechef.com/problems/TRUESCORE




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b,c,d;
	    cin >> a >> b >> c >> d;
	    (c >=a && d >= b) ? cout << "POSSIBLE" : cout << "IMPOSSIBLE";
	    cout << endl;
	}
	return 0;
}
