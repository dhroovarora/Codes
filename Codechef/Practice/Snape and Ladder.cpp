https://www.codechef.com/problems/SNAPE




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    double q,w;
	    cin >> q >> w;
	    cout << sqrt(w*w - q*q) << " " << sqrt(w*w + q*q);
	    cout << endl;
	}
	return 0;
}