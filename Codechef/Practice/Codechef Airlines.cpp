https://www.codechef.com/problems/AIRLINES




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y,z;
	    cin >> x >> y >> z;
	    (y > 10*x) ? cout << 10*x*z : cout << y*z;
	    cout << endl;
	}
	return 0;
}