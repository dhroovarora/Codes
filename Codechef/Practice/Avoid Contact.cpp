https://www.codechef.com/problems/AVOIDCONTACT




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y;
	    cin >> x >> y;
	    (x==y) ? cout << 2*x - 1 : cout << x + y;
	    cout << endl;
	}
	return 0;
}