https://www.codechef.com/problems/EITA




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int d,x,y,z;
	    cin >> d >> x >> y >> z;
	    (7*x < d*y + (7-d)*z) ? cout << d*y + (7-d)*z : cout << 7*x;
	    cout << endl;
	}
	return 0;
}