https://www.codechef.com/problems/MARARUN




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int D,d,A,B,C;
	    cin >> D >> d >> A >> B >> C;
	    (D*d >= 42) ? cout << C : (D*d >= 21) ? cout << B : (D*d >= 10) ? cout << A : cout << 0;
	    cout << endl;
	}
	return 0;
}