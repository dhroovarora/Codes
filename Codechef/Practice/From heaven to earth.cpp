https://www.codechef.com/problems/ELEVSTRS




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    double n,a,b;
	    cin >> n >> a >> b;
	    ((n*sqrt(2))/a < 2*n/b) ? cout << "Stairs" : cout << "Elevator";
	    cout << endl;
	}
	return 0;
}