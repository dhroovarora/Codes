https://www.codechef.com/problems/CANCHEF




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y;
	    cin >> x >> y;
	    (15*x >= 2*y) ? cout << "YES" : cout << "NO";
	    cout << endl;
	}
	return 0;
}