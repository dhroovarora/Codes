https://www.codechef.com/problems/MONOPOLY




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y,z;
	    cin >> x >> y >> z;
	    (x > y + z ) ? cout << "Yes" : (y > x + z) ? cout << "Yes" : (z > x + y) ? cout << "Yes" : cout << "No";
	    cout << endl;
	}
	return 0;
}
