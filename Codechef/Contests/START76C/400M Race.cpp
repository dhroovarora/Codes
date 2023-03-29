https://www.codechef.com/START76C/problems/RACE400M




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y,z;
	    cin >> x >> y >> z;
	    (x < y) ? ( x < z) ? cout << "ALICE" : cout << "CHARLIE" : (y < z) ? cout << "BOB" : cout << "CHARLIE";
	    cout << endl;
	}
	return 0;
}