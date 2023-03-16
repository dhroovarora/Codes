https://www.codechef.com/problems/RECTSQ




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,m;
	    cin >> n >> m;
	    cout << (n*m) / (__gcd(n,m)*__gcd(n,m)) << endl;
	}
	return 0;
}