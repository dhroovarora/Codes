https://www.codechef.com/problems/CGYM




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y,z;
	    cin >> x >> y >> z;
	    (z >= x + y) ? cout << 2 : (z >= x) ? cout << 1 : cout << 0;
	    cout << endl;
	}
	return 0;
}
