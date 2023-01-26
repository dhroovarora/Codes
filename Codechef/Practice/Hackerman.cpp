https://www.codechef.com/problems/PRIMEDICE




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b;
	    cin >> a >> b;
	    (a+b == 2 || a+b == 3 || a+b == 5 || a+b == 7 || a+b == 11) ? cout << "ALICE" : cout << "BOB";
	    cout << endl;
	    }
	return 0;
}