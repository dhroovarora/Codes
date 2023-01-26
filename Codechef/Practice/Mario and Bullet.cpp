https://www.codechef.com/problems/BULLET




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y,z;
	    cin >> x >> y >> z;
	    (y/x >= z) ? cout << 0 : cout << z - y/x ;
	    cout << endl;
	}
	return 0;
}