https://www.codechef.com/problems/LOOP




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b,m;
	    cin >> a >> b >> m;
	    cout << min(abs(a-b), m - abs(a-b)) << endl;
	}
	return 0;
}