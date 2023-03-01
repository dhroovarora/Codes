https://www.codechef.com/problems/FLOW009




#include <iostream>
#include<iomanip>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    float q,p;
	    cin >> q >> p;
	    cout << fixed;
	    cout << setprecision(6);
	    (q > 1000) ? cout << (0.9)*q*p : cout << q*p;
	    cout << endl;
	}
	return 0;
}