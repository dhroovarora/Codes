https://www.codechef.com/problems/FLOW011




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    double s;
	    cin >> s;
	    cout << fixed;
	    cout << setprecision(2);
	    (s < 1500 ) ? cout << 2*s : cout << s + 500 + (98*s)/100;
	    cout << endl;
	}
	return 0;
}