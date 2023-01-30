https://www.codechef.com/problems/XJUMP




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y;
	    cin >> x >> y;
	    (x < y) ? cout << x : (x == y) ? cout << 1 : (x%y) ? cout << x/y + x%y : cout << x/y;
	    cout << endl;
	}
	return 0;
}