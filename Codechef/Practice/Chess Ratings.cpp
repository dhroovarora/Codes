https://www.codechef.com/problems/C_RATING




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y;
	    cin >> x >> y;
	    ((y-x)%8) ? cout << (y-x)/8 + 1 << endl : cout << (y-x)/8 << endl;
	}
	return 0;
}