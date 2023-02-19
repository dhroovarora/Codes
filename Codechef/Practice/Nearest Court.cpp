https://www.codechef.com/problems/NEARESTCOURT




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y;
	    cin >> x >> y;
	    (abs(x-y)%2) ? cout << abs(x-y)/2 + 1  : cout << abs(x-y)/2;
	    cout << endl;
	}
	return 0;
}