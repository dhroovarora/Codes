https://www.codechef.com/START76C/problems/REDSTRBTN




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y,z;
	    cin >> x >> y >> z;
	    x += y + z;
	    (x > 5) ? cout << "YES" : cout << "NO";
	    cout << endl;
	}
	return 0;
}