https://www.codechef.com/problems/MINANDMAX2




#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    uint64_t n;
	    cin >> n;
	    cout << n - 1 + n*(n+1)/2;
	    cout << endl;
	}
	return 0;
}